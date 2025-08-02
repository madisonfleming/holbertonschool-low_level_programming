#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if success or -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (current == NULL)
		return (-1);

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);

	if (current == *head)
		*head = current->next;

	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
return (1);
}
