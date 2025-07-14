#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialise a variable of struct dog
 * @d: variable
 * @name: pointer to string
 * @age: float variable
 * @owner: pointer to string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
