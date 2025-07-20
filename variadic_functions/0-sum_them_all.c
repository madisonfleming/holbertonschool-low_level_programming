#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of input numbers
 * @n: size of input
 * Return: sum of number
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int term;
	int total = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	while (i < n)
	{
		term = va_arg(list, int);
		total = total + term;
	i++;
	}
	va_end(list);
return (total);
}
