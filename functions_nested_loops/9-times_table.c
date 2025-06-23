#include "main.h"
/**
 * times_table - entry point
 * Description: print the times table using _putchar
 */

void times_table(void)
{
	int i = 0;
	int j;
	int result;

	while (i <= 9)
	{
		j = 0;

	while (j <= 9)
	{
		result = i * j;

	if (j != 0)
	{
		_putchar(',');
		_putchar(' ');

		if (result < 10)
		_putchar(' ');
	}
	if (result < 10)
	{
		_putchar('0' + result);
	}
	else
	{
		_putchar('0' + (result / 10));
		_putchar('0' + (result % 10));
	}
	j = j + 1;
	}
	_putchar('\n');
	i = i + 1;

}
}
