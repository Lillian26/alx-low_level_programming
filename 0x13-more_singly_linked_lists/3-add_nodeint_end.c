#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: the pointer to the head of the list
 * @n: the data to add the new node
 *
 * Return: returns the pointer of the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL, *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->next = NULL;
		new_node->n = n;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
