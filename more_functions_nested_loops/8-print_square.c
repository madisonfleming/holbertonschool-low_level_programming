#include "main.h"
/**
 * print_square - to print a square
 * @size: the size of the square that is printed
 * return: void
 */
void print_square(int size)
{
	int i;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
	for (n = 0; n < size; n++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
