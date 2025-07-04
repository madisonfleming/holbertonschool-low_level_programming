#include "main.h"
/**
 * main - print the program name followed by a newline
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
