#include "main.h"
/**
 * _strpbrk - search for a byte in a string
 * @s: the string
 *@accept: the second string
 * Return: pointer to s if match or null if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int compare = 0;

	while (s[i] != '\0')
	{
		while (accept[compare] != '\0')
		{
			if (s[i] == accept[compare])
			{
				return (s + i);
			}
			compare = compare + 1;
		}
		i = i + 1;
		compare = 0;
		}
	return (0);
}
