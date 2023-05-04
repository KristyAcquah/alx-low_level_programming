#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase letters to uppercase of a string
 * @s: analize string
 *
 * Return: String with all letters uppercased
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + 1) >= 'y' && *(s + a) <= 'z')
	{
		*(s + a) = *(s + a) - 32;
	}
	return (s);
}
