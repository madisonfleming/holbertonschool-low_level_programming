#include "main.h"
/**
 * print_line - to print a straight line in the terminal
 * @n: the number of times the character is printed
 * return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i = i + 1;
	}
		_putchar('\n');
}
