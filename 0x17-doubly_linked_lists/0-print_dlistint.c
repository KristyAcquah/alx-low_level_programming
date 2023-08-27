#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - prints all the elements
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int read;

	read = 0;

	if (h == NULL)
		return (read);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		read++;
		h = h->next;
	}
	return (read);
}

