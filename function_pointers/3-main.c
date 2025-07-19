#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: Always Success (0)
 */
int main(int argc, char *argv[])
{
	int result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);
	result = operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
