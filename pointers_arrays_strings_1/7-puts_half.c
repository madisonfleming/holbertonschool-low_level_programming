#include "main.h"
/**
 * puts_half - print half of a string
 * @str: the stirng
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int length_of_string = 0;
	int i;

	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}

	n = (length_of_string + 1) / 2;

	for (i = n; i < length_of_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
