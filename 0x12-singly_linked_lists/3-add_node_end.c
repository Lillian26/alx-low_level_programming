#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: double pointer to the list
 * @str: string added to the new node as value
 *
 * Return: address of the new list, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = strlen(str);
	list_t *temp = *head;
	list_t *new_node = NULL;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}

