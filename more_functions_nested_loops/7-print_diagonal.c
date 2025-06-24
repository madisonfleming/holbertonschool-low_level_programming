#include "main.h"
/**
 * print_diagonal - to print a diagonal line
 * @n: the number of times the character is printed
 * return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		s = 0;

	while (s < i)
	{
		_putchar(' ');
		s = s + 1;
	}
	_putchar('\\');
	_putchar('\n');
	i = i + 1;
	}
}
