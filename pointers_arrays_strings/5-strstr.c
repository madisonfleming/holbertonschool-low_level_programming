#include "main.h"
/**
 *_strstr - locate a substring
 *@haystack: the string
 *@needle: the substring
 *Return: pointer to substring or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int second = 0;

	while (haystack[i] != '\0')
	{
		second = 0;

		while (needle[second] != '\0')
		{
			if (haystack[i + second] != needle[second])
			{
				break;
			}
			second = second + 1;
		}
		if (needle[second] == '\0')
		{
			return (haystack + i);
		}
		i = i + 1;
	}
	return (0);
}
