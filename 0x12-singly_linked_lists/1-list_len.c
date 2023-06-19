#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the length of element in the linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elemnts in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
