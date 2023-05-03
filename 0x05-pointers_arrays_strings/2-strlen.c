#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
