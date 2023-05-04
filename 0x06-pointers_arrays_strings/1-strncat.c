#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates n bytes of two
 * @dest: destination of pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length, i;

	for (dest_length = 0; dest[dest_length] != '\0';
			dest_length++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_length + i] = src[i];

	/* should end with the end of a string char*/
	dest[dest_length + 1] = '\0';

	return (dest);
}
