#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: use print_alphabet_x10 to print the alphabet with _putchar
 * Return: Success (0)
 */
void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c = c + 1;
	}
		_putchar ('\n');
		num = num + 1;
	}
}
