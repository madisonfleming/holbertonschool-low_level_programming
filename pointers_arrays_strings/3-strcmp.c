#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: <0 if s1<s2, 0 if s1==s2, >0 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	if (s1[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}
