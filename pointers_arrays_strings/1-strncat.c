#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: the string to append
 * @dest: second string
 * @n: the maxium numbers of characters to be appended
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*start != '\0')
	{
		start++;
	}
	while (*src != '\0' && n > 0)
	{
		*start = *src;
		start++;
		src++;
		n--;
	}
	*start = '\0';
return (dest);
}
