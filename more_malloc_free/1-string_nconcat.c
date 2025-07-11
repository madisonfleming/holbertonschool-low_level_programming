#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings using malloc
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to copy from second string
 * Return: pointer to string, NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';

return (s);
}
