#include "main.h"
/**
 * _atoi - convert string to int
 * @s: input string
 * Return: converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int i = 0;

	while (s[i])
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result);
}

/**
 * is_num - check if number is digit
 * @s: the string to check
 * Return: 1 if digit otherwise 0
 */
int is_num(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * print_number - print number using recursion
 * @n: the number to print
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * main - adds positive numbers and print result through recursion
 * @argc: argument count
 * @argv: pointer to string of arguments
 * Return: Success or 0 if not number otherwirse error if number contains chars
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int j = 0;

	while (i < argc)
	{
		if (!is_num(argv[i]))
		{
			char *error = "Error\n";

			while (error[j])
			{
				_putchar(error[j]);
				j++;
			}
			return (1);
		}
		sum += _atoi(argv[i]);
		i++;
	}
print_number(sum);
_putchar('\n');
return (0);
}
