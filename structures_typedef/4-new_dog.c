#include "dog.h"
#include <stdlib.h>
/**
 * get_length - get length of string
 * @str: the string
 * Return: string + null terminator
 */
int get_length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
return (i + 1);
}
/**
 * copy_string - allocate memory and copy string
 * @str: the string
 * Return: string
 */
char *copy_string(char *str)
{
	int i = 0;
	int size;
	char *s;

	size = get_length(str);

	s = malloc(size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
s[i] = '\0';
return (s);
}
/**
 * new_dog - pointer to new dog
 * @name: pointer to string
 * @age: float variable
 * @owner: pointer to string
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n;
	char *o;

	n = copy_string(name);
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	o = copy_string(owner);
	if (o == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}
	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
