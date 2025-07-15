#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for an integer using a comparison function
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to compare values
 *
 * Return: Index of the first element if cmp  does not return 0,
 *         or -1 if no match is found or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
return (-1);
}
