#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - return the number of elements in a doubly linked list
 * @h: head of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
return (count);
}
