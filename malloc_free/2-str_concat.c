#include "main.h"
#include "stdlib.h"
/**
 * str_concat - concatenate two strings with malloc
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new string otherwise Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
return (s);
}
