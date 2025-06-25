#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
