#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node to the end
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *fresh;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = fresh;
	}
	else
	{
		*head = fresh;
	}
	fresh->prev = h;

	return (fresh);
}
