#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - get the value associated with a key
 * @ht: the hash table to search
 * @key: the key to search for
 * Return: value of key or null if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
