#include "lists.h"

/**
 * get_nodeint_at_index - gets the nths node of a linked list
 * @head: pointer of the head of the list
 * @index: index of the node searched for
 *
 * Return: returns the nth node, or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t_node = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (t_node)
	{
		if (index == count)
		{
			return (t_node);
		}
		count++;
	}
	return (NULL);
}

