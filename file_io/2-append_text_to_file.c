#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - append text to a file
 * @filename: name of file
 * @text_content: string to append
 * Return: 1 if Success, otherwise -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
