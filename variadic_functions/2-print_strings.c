#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: string to print inbetween strings
 * @n: number of strings
 * Return: Success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int i = 0;

	va_start(list, n);
	while (i < n)
	{
		str = va_arg(list, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(list);
printf("\n");
}
