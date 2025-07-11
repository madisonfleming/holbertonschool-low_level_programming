#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: array elements
 * @size: size of array
 * Return: pointer to memory or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
