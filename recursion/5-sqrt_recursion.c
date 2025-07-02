#include "main.h"
/**
* result - check numbers from 1 to n
* @n: the number
* @count: checker from 1 to n
* Return: - -1 if no square root, otherwise return the square root of n
*/
int result(int n, int count)
{
	if (count * count == n)
		return (count);
	else if (count * count > n)
		return (-1);

return (result(n, count + 1));
}

/**
* _sqrt_recursion - return the natural square root of n
* @n: the number
* Return: result
*/
int _sqrt_recursion(int n)
{
	return (result(n, 0));
}
