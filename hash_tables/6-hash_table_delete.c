#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_delete - delete the memory of a hash table
 * @ht: table to free
 * Return: success
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	hash_node_t *temp;

	while (i < ht->size)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
