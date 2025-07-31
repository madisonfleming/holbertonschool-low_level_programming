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
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp->len);
		free(temp);
	}
}
