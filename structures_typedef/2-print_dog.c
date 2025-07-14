#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a struct dog
 * @d: pointer to struct
 * Return: printed struct, or nil if d or name is NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
