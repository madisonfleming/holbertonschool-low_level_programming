#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with a given code
 * @code: The exit code
 * @message: The error message format
 * @arg: Argument to insert into the message
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - Copies the contents of a file to another file
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on success, exits with codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (read_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}
