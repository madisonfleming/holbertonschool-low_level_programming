#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: the buffer
 * @src: the string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int ptr = 0;

	while (src[ptr] != '\0')
	{
		dest[ptr] = src[ptr];
		ptr++;
	}
	dest[ptr] = '\0';

return (dest);
}
