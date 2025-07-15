#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
