#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * function_pointers.h - header file for all functions
 *
 * Description: this file includes prototypes of functions
 * that use function pointers.
 */

#include <unistd.h>

/**
 * print_name - print a name
 *
 * @name: pointer to the name to print
 * @f: pointer to function that takes a char * argument and returns void
 */
void print_name(char *name, void (*f)(char *));

#endif
