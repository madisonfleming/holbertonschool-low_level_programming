#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function to execute each element of an array
 * @array: pointer to the array
 * @size: size of value in array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
