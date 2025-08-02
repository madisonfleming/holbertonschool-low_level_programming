#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - return nth node
 * @head: head of the list
 * @index: index of the node starting from 0
 * Return: nth node or null if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
		{
			return (current->next);
		}
		count++;
		current = current->next;
	}
	return (current);
}
