#include <stdio.h>
/**
 * main - entry point
 * Description: print from 1 to 100
 * printf: multiples of three print Fizz and five print Buzz
 * Return: always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	if (num % 3 == 0 && num % 5 == 0)
		{
		printf("Fizzbuzz");
		}
	else if (num % 3 == 0)
		{
		printf("Fizz");
		}
	else if (num % 5 == 0)
		{
		printf("Buzz");
		}
	else
	{
		printf("%d", num);
	}
	if (num != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
