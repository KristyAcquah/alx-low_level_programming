#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination of the pointer
 * @src: the source pointer
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int x = -1, i;

	for (i = 0; dest[i] != '\0';
			i++)

	do {
		x++;
		dest[i] = src[x];
		i++;
	} while (src[x] != '\0');

	return (dest);
}
