#include "main.h"
/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: pointer to string of arguments
* Return: Result otherwise return error if two arguments not received
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int sum;
	int digits[15];
	int i = 0;

	if (argc != 3)
	{
		_puts("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	sum = num1 * num2;

	if (sum < 0)
	{
		_putchar('-');
		sum = sum * -1;
	}
	while (sum > 0)
	{
		digits[i] = sum % 10;
		sum = sum / 10;
		i = i + 1;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(digits[i] + '0');
		i = i - 1;
	}
		_putchar('\n');
return (0);
}
