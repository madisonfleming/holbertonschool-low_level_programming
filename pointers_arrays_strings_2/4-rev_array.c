#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: the size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
