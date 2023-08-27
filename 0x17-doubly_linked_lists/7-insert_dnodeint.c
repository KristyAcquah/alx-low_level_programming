#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fresh;
	dlistint_t *head;
	unsigned int y;

	fresh = NULL;
	if (idx == 0)
		fresh = add_dnodeint(h, n);
	else
	{
		head = *h;
		y = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (y == idx)
			{
				if (head->next == NULL)
					fresh = add_dnodeint_end(h, n);
				else
				{
					fresh = malloc(sizeof(dlistint_t));
					if (fresh != NULL)
					{
						fresh->n = n;
						fresh->next = head->next;
						fresh->prev = head;
						head->next->prev = fresh;
						head->next = fresh;
					}
				}
				break;
			}
			head = head->next;
			y++;
		}
	}
	return (fresh);
}

