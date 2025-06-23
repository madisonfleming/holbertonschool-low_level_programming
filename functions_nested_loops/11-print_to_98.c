#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number from n to 98
 * @n: first printed number
 * Description: using printf to print numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
		printf("%d", n);
		if (n != 98)
		printf(", ");
		n = n + 1;
		}
	}
	else
	{
		while (n >= 98)
		{
		printf("%d", n);
		if (n != 98)
		printf(", ");
		n = n - 1;
		}
	}
		printf("\n");
}
