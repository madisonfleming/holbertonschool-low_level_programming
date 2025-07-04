#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, num = 0, sign = 1;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
