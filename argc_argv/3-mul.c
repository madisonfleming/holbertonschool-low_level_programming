#include "main.h"
/**
 * _atoi - convert string to int
 * @s: input string
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	if (s[0] == '-')
	{
	sign = -1;
	i++;
	}
	while (s[i] != '\0')
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (sign * result);
}
/**
 * print_number - print an integer using _putchar through recursion
 * @n: the number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n / 10)
	{
	print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * main - multipliy two numbers and print result through recursion
 * @argc: argument count
 * @argv: pointer to string of arguments
 * Return: Success or error if 3 arguments not passed
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int num1;
	int num2;

	if (argc != 3)
	{
		char *error = "Error\n";

		while (error[i])
		{
			_putchar(error[i]);
			i++;
		}
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	print_number(num1 * num2);
	_putchar('\n');

	return (0);
}
