#include <stdio.h>

/**
 * main - entry point
 * Description: for while and putchar
 * Return: Success (0)
 */

int main(void)
{
	int i;

for (i = 97; i <= 122; i++)
	{
	if (i == 101 || i == 113)
	{
	continue;
	}
	putchar(i);
	}
	putchar('\n');

return (0);
}
