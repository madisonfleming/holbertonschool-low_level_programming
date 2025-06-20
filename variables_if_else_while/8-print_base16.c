#include <stdio.h>

/**
 * main - entry point
 * Description: print numbers of base16
 * Return: Success (0)
 */

int main(void)
{
	int num = 48;
	int a = 97;

	while (num <= 57)
	{
	putchar(num);
	num = num + 1;
	}
	while (a <= 102)
	{
	putchar(a);
	a = a + 1;
	}
	putchar('\n');

return (0);
}
