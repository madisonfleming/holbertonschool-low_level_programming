#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - free allocated memory
 * @head: double pointer to the head of the list
 * Return: Success
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	if (head->str != NULL)
	{
		free(head->str);
	}
	free(head);
}
