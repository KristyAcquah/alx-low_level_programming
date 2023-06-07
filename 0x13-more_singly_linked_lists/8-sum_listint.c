#include "lists.h"
/**
 * sum_listint - calculate the sum of all the data in the listint_t list
 * @head: first node in the linked list
 *
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *new = head;

	while (new)
	{
		add += new->n;
		new = new->next;
	}

	return (add);
}
