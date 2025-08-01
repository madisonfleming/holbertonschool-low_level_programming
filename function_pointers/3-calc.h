#ifndef CALC_H
#define CALC_H
/**
 * struct op - struct operator
 * @op: the operator
 * @f: pointer to function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - add int values
 * @a: first value
 * @b: second value
 * Return: Result
 */
int op_add(int a, int b);

/**
 * op_sub - subtract int values
 * @a: first value
 * @b: second value
 * Return: Result
 */
int op_sub(int a, int b);

/**
 * op_mul - multiply int values
 * @a: first value
 * @b: second value
 * Return: Result
 */
int op_mul(int a, int b);

/**
 * op_div - divide int values
 * @a: first value
 * @b: second value
 * Return: Result
 */
int op_div(int a, int b);

/**
 * op_mod - modulus of int values
 * @a: first value
 * @b: second value
 * Return: Result
 */
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
