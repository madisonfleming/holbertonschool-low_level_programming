#include "main.h"
/**
 * print_last_digit - check the code
 * @num: the number passed in
 * Description: _abs finds the absolute integer
 * Return: absolute value of num last digit
 */
int print_last_digit(int num)
{
	int final = num % 10;

	if (final < 0)
		final = -final;

	_putchar(final + 48);
	return (final);
}
