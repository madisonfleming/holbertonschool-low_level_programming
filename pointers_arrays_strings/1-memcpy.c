#include "main.h"
/**
 * _memcpy - copy a memory area
 * @src: the memory to copy
 * @dest: the second string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
return (dest);
}
