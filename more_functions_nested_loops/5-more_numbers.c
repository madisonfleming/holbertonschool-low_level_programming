#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 ten times
 * return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
	int num = 0;

	while (num <= 14)
	{
		if (num >= 10)
		_putchar('0' + num / 10);

		_putchar('0' + num % 10);
		num = num + 1;
	}
	_putchar('\n');
	i = i + 1;
	}
}
