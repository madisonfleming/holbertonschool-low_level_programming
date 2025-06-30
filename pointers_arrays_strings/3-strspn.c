#include "main.h"
/**
 * _strspn - get length of a prefix substring
 * @s: the string
 * @accept: pointer containing the characters
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
	match = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	match = 1;
	break;
	}
	}
	if (!match)
	break;
	}
	return i;
}
