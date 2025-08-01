#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
return (count);
}
