#include "main.h"
#include <stdio.h>
/**
 * print_array - print an array of integers
 * @a: the array to be printed
 * @n: the number of elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int array = 0;

	while (array < n)
	{
		printf("%d", a[array]);

	if (array < n - 1)
	{
		printf(", ");
	}
	array = array + 1;
	}
	printf("\n");
}
