#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * variadic_functions.h - header file for all functions
 *
 * Description: this file includes prototypes of variadic functions
 * @n: num of arguments
 * Return: Success
 */

#include <unistd.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - struct for format value
 * Description: find the format value
 * @f: function pointer
 * @type: type of value
 */
typedef struct op
{
	char type;
	void (*f)(va_list *);
} op_t;

#endif
