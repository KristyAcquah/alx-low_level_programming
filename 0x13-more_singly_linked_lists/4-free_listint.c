#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t to be freed
 *
 * Returrn: 0
 */
void free_listint(listint_t *head)
{
	listint_t *now;

	while (head == NULL)
	{
		head = head->next;
		free(head);
		now = head;
	}
}
