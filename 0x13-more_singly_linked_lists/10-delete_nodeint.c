#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t_node = *head, *d_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t_node);
		return (1);
	}

	while (count < index  - 1)
	{
		if (t_node == NULL || t_node->next == NULL)
			return (-1);
		t_node = t_node->next;
		count++;
	}

	d_node = t_node->next;
	t_node->next = d_node->next;
	free(d_node);
	return (1);
}
