#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table to update
 * @key: the key that can not be empty
 * @value: value to be duplicated
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned int index;

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
return (1);
}
