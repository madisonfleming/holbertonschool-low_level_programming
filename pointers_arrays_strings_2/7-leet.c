#include "main.h"
/**
 * leet - change a string to 1337
 * @str: the string
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
			str[i] = numbers[j];
			break;
			}
		}
	i++;
	}
return (str);
}
