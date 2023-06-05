#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *h = head;

	while (head)
	{
		if (!head->str)
			printf("[0], (nil)\n");
		else
			printf("[%u] %s\n, head -> len, head -> str");
		head = head->next;
		count++;
	}
	return (count);
}
