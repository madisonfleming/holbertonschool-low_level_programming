#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_djb2 - hash function implementing djb2
 * @str: string
 * Return: Success
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
