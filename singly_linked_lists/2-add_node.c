#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_new_node - create a new node using strdup
 * @head: double pointer to the head of the list
 * @str: pointer to the string to be copied
 * Return: address of the new element or NULL if it failed
 */
struct list_t *create_new_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	unsigned int len = 0;

	while (str[len])
		len++;
	new_node->len = len;

	new_node->next = NULL;

return (new_node);
}

/**
 * add_node - add a new node to the beginning of a list
 * @head: double pointer to the head of the list
 * @str: the value to store in the new node
 * Return: address to new node or null if malloc fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = create_new_node(str);

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;
return (new_node);
}
