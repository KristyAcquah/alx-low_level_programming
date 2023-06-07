#include "lists.h"

/**
 * get_nodeint_at_index - return the node of a number in the linked list
 * @head: first node of a linked list
 * @index: index of the number to return
 *
 * Return: pointer to the node of the missen number or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *number = head;

	while (n < index)
		n++;
	{
		if (number == NULL)
		{
			return (NULL);
		}
		number = number->next;
	}
	return (number);
}
