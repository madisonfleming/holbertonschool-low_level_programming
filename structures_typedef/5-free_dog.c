#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free allocated memory for struct
 * @d: pointer to the struct
 * Return: Success
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
