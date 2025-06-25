#include "main.h"
/**
 * swap_int - swapping the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * return: void
 */
void swap_int(int *a, int *b)
{
	int store = *a;

	*a = *b;
	*b = store;
}
