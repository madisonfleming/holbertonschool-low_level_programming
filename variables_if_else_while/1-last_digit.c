#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: if statements and printf
 * Return: Succes (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int number, last_digit;

	printf("Last digit of");
	printf("n");
	printf("is");
	scanf("%d", &number);
	last_digit = number % 10;
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	if (n < 6 || n != 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
