#include "main.h"
/**
 * _puts - prints a string followed by a newline
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
