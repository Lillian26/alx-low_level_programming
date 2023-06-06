#include "lists.h"

/**
 * listint_len - counts and returns the number of
 * elements in a linked list
 * @h: the linked list
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
