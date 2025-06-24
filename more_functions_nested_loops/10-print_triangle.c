#include "main.h"
/**
 * print_triangle - to print a triangle
 * @size: the size of the triangle that is printed
 * return: void
 */
void print_triangle(int size)
{
	int r;
	int s;
	int tri;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 1; r <= size; r++)
	{
	for (s = size - r; s > 0; s--)
	{
		_putchar(' ');
	}
	for (tri = 1; tri <= r; tri++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
