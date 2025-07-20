#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * variadic_functions.h - header file for all functions
 *
 * Description: this file includes prototypes of variadic functions
 * @name: pointer to string to be printed
 * @f: function pointer to print a name
 */

#include <unistd.h>

int sum_them_all(const unsigned int n, ...);

#endif
