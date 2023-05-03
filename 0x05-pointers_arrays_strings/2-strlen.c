#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++; s++;
	}
	return (len);
}
