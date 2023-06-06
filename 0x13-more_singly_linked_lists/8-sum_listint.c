#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a list
 * @head: pointer to the list
 *
 * Return: returns the sum of all the data, or 0 on empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t_node = head;

	while (t_node)
	{
		sum += t_node->n;
		t_node = t_node->next;
	}
	return (sum);
}
