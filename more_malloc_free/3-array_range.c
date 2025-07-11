#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of int values
 * @min: min value
 * @max: last value
 * Return: pointer to array, Null if fail or min > max
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int size = (max - min + 1);

	if (min > max)
		return (NULL);

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
return (array);
}
