#include <stdio.h>

/**
 * main - entry point
 * Desciption: single digit num
 * Return: Success (0)
 */

int main(void)
{
	int final_digit;
	int digit;

	final_digit = 9;
	digit = 0;

	while (digit <= final_digit)
	{
	putchar(48 + digit);

	if (digit != 9)
	{
	putchar(',');
	putchar(' ');
	}
	digit = digit + 1;
	}
	putchar('\n');

return (0);
}
