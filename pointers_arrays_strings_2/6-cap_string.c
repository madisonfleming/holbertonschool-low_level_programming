#include "main.h"
/**
 * cap_string - capitalise all words of a string
 * @str: the string
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i] != '\0')
	{
	if (str[i - 1] == ' ' || str[i - 1] == ',' || str[i - 1] == ';' ||
	str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
	str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
	str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '\t' ||
	str[i - 1] == '\n')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	}
	i++;
	}
return (str);
}
