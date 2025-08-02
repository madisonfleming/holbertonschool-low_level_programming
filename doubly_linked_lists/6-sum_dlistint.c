#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - return the sum of all data in a list
 * @head: head of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
