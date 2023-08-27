#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int read;

	read = 0;

	if (h == NULL)
		return (read);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		read++;
		h = h->next;
	}

	return (read);
}
