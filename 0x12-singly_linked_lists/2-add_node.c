#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer of the head of the list
 * @str: the string to add as the value of the node
 *
 * Return: the address of the new list, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
