#include "main.h"
/**
 * print_sign - entry point
 * Description: print_sign to print number
 * @n: number to check
 * Return: 1 (if greater than 0), 0 (if 0), Return: -1 (otherwise)
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar (43);
	return (1);
	}
	if (n == 0)
	{
	_putchar (48);
	return (0);
	}
	else
	{
	_putchar (45);
	return (-1);
}
}
