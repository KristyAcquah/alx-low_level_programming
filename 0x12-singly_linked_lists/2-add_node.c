#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a nee node to the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: string to add a new node
 *
 * Return: the address of the new elements or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int len = 0;

	while (str[len])
		len++;

	fresh = malloc(sizeof(list_t));

	while (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = (*head);
	*head = fresh;

	return (*head);
}
