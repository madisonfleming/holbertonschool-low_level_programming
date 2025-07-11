#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: number of bytes
 * Return: 98 if fail otherwise pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

return (ptr);
}
