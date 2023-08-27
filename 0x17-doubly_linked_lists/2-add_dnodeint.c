#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: the head of the list
 * @n: value of the element
 *
 * Return: the aaddress of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh;
	dlistint_t *h;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	fresh->next = h;

	if (h != NULL)
		h->prev = fresh;

	*head = fresh;
	return (fresh);
}
