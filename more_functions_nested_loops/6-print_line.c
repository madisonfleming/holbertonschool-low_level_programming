#include "main.h"
/**
 * print_line - to print a straight line in the terminal
 * @n: the number of times the character is printed
 * return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		n = n + 1;
	}
	else
	{
		_putchar('\n');
	}
}
