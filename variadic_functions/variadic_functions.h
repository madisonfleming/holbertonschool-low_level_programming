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

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
