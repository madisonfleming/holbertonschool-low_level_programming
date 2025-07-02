#include "main.h"
/**
 * _pow_recursion - return the value of x to the power of y
 * @x: first int
 * @y: second int
 * Return: -1 if y is lower than 0, value of x otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		if (y == 0)
		{
		return (1);
		}
	else
		if (y % 2 == 0)
		{
		return (_pow_recursion(x * x, y / 2));
		}
	else
	{
		return (x * _pow_recursion(x * x, (y -  1) / 2));
	}
}
