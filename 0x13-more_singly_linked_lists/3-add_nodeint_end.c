#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to the last end to the list
 * @n: data to insert the new element
 *
 * Return: pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start;
	listint_t *temp = *head;

	fresh = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = NULL;

	if (*head != NULL)
	{
		*head = start;
		return (start);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = start;

	return (start);
}

