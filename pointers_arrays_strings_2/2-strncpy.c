#include "main.h"
/**
 * _strncpy - copy a string
 * @src: the string to copy
 * @dest: the second string
 * @n: maximum number of characters to copy
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int start = 0;

	while (start < n && src[start] != '\0')
	{
		dest[start] = src[start];
		start++;
	}
	while (start < n)
	{
		dest[start] = '\0';
		start++;
	}
return (dest);
}
