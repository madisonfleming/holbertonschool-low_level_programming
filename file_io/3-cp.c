#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * error_exit - Print error message and exit
 * @code: Exit code
 * @format: Error message format
 * @arg: Argument for the format
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
* close_fd - close file successfully
* @fd: file to close
*/
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies content of file to another
 *
 * @argc: int
 *
 * @argv: double pointer
 *
 * Return: Copy of file
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	r_bytes = read(fd_from, buffer, BUF_SIZE);
	if (r_bytes == -1)
	{
		close(fd_from);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while (r_bytes > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}

		r_bytes = read(fd_from, buffer, BUF_SIZE);
		if (r_bytes == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit(98, "Error: Can't read from file %s\n", argv[1]);
		}
	}

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
