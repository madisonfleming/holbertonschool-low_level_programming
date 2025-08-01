#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - free list
 * @head: head of list
 * Return: Success
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);

free(head);
}
