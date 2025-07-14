#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the dog
 * @name: pointer to string
 * @age: age in non-integer
 * @owner: pointer to string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
