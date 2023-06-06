#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index where insertion is made
 * @n: data of the new node
 *
 * Return: returns address of the new node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head
		, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *n_node = NULL, *t_node = *head;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL || head == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
	}
	while (t_node->next != NULL && idx < count)
	{
		if (count == idx - 1)
		{
			n_node->next = t_node->next;
			t_node->next = n_node;
			return (n_node);
		}
		else
			t_node = t_node->next;
		count++;
	}
	return (NULL);
}
