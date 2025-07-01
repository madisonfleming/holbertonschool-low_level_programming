#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of two diagonals of square matrix
 * @a: the matrix of integers
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
		i = i + 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
