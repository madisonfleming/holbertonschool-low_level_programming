#include "main.h"
/**
 * print_numbers - print from 0 to 9
 * return: nothing (void)
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar('0' + num);
		num = num + 1;
	}
		_putchar('\n');
}
