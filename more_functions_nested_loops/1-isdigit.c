#include "main.h"
/**
 * _isdigit - checking for digit
 * @c: digit being checked
 * Return: 1 if digit, Return 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
