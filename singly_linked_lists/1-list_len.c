#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - print the number of elements in a list
 * @h: head of the node
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
