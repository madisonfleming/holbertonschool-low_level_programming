#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: the number
 * Return: -1 if number is less than 0, otherwise return factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
