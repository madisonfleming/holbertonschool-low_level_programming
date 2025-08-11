#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * key_index - find the index of a key
 * @key: key
 * @size: size of the array of the hashtable
 * Return: index of the key that should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
