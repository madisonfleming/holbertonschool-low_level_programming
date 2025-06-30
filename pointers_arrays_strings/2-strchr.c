#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer if c is in string or null if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return (0);
}
