#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase letters to uppercase of a string
 * @s: analized string
 *
 * Return: String with all letters uppercased
 */
char *string_toupper(char *s)
{
	int b = 0;

	while (*(s + b) != '\0')
	{
		if (*(s + b) >= 'a' && *(s + b) <= 'z')
		{
			*(s + b) = *(s + b) - 32;
		}
		b++;
	}
	return (s);
}
