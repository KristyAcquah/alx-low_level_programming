#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t to be freed
 *
 * Returrn: 0
 */
void free_listint(listint_t *head)
{
	listint_t *data;

	while (head == 0)
	{
		data = head->next;
		free(head);
		head = data;
	}
}
