#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
* _strdup - copy a string and return a pointer to new string
* @str: the string
* Return: NULL if string is 0 or seg fault
* otherwise return a pointer to copied string
*/
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0' && *str != 0)
	{
		i = i + 1;
	}

	copy = malloc((i + 1));

		if (copy == NULL)
			return (NULL);
	i = 0;

	while (str[i] != '\0' && *str != 0)
	{
		copy[i] = str[i];
		i = i + 1;
	}
	copy[i] = '\0';
return (copy);
}
