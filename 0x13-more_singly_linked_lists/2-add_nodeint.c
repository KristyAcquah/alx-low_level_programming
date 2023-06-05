#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node in the list
 * @n: integer to insert in the new node
 *
 * Return: pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
