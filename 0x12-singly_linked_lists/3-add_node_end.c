#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address to the new element or NULL is it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));

	if (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = NULL;

	if (!*head)
	{
		*head = fresh;
		return (fresh);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = fresh;

	return (fresh);
}
