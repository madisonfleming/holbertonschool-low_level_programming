#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * create_array - create an array of chars
 * @size: the size of the array
 * @c: the character
 * Return: NULL if size is 0 or fails otherwise return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
