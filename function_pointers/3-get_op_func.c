#include "calc.h"
#include <stdio.h>
/**
 * get_op_func - function pointer to the operator
 * @s: the string of arguments
 * Return: the opertor
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;

	while (*ops[i].op != *s)
	{
		i = i + 1;

		if ((i > 4) || (s[1] != '\0'))
		{
			printf("Error");
			exit(98);
		}
	}
	return (ops[i].f);
}
