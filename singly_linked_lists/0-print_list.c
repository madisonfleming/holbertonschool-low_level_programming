#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - print all elements of a list
 * @h: head of the node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}
	return (count);
}
