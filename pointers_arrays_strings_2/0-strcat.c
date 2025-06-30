#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: the string to append
 * @dest: the second string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*start != '\0')
	{
	start++;
	}
	while (*src != '\0')
	{
	*start = *src;
	start++;
	src++;
	}
	*start = '\0';

return (dest);
}
