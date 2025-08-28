#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - print a hash table
 * @ht: table to print
 * Return: printed table or null if empty
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (first != 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first = 0;

			current = current->next;
		}
		i++;
	}
	printf("}\n");
}
