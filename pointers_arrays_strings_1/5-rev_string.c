#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end;
	char t;

	while (s[len] != '\0')
	{
		len++;
	}
	end = len - 1;

	while (start < end)
	{
		t = s[start];
		s[start] = s[end];
		s[end] = t;

		start++;
		end--;
	}

}
