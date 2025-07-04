#include "main.h"
/**
 * main - print each argument
 * @argc: count of arguments
 * @argv: array of strings pointing to arguments
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
return (0);
}
