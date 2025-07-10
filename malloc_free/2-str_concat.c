#include "main.h"
#include "stdlib.h"
/**
 * str_concat - concatenate two strings with malloc
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new string otherwise Null on failure or empty string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;

	if (s1 == NULL)
	{
		return ('\0' + s2);
	}

	if (s2 == NULL)
	{
		return (s1 + '\0');
	}

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	s = malloc(i + 1);

	while (*s1 != '\0')
	{
		s[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	s[i] = '\0';
return (s);
}
