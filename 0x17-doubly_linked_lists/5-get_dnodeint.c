#include "lists.h"

/**
 * get_dnodeint_at_index - retuns the nth node of a dlistint_t linked list
 * @head: pointer to head of the list
 * @index: index of the node to search for
 *
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int space;
	dlistint_t *tmp;

	space = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == space)
			return (tmp);
		space++;
		tmp = tmp->next;
	}
	return (NULL);
}
