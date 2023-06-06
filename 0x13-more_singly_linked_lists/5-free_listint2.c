#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the lintint_t to be freed
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		*head = current;
		free(current);
	}
	*head = NULL;
}

