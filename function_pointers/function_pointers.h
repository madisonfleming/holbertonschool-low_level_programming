#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * function_pointers.h - header file for all functions
 *
 * Description: this file includes prototypes of functions
 * that use function pointers.
 * @name: pointer to string to be printed
 * @f: function pointer to print a name
 */

#include <unistd.h>

void print_name(char *name, void (*f)(char *));

#endif
