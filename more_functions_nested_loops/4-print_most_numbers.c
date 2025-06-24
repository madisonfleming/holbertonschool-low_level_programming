#include "main.h"
/**
 * print_most_numbers - print number from 0 to 9, without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}
			num = num + 1;
	}
		_putchar('\n');
}
