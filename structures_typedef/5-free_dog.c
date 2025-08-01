#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free allocated memory for struct
 * @d: pointer to the struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
