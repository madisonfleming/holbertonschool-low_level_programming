#include "main.h"
/**
 * main - print the number of arguments
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int num = argc - 1;
	char digits[15];
	int i = 0;

	(void)argv;

	if (num == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	while (num > 0)
	{
		digits[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	while (i--)
	{
		_putchar(digits[i]);
	}
	_putchar('\n');
	return (0);
}
