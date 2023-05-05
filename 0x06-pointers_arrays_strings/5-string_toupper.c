#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lowercase letters to uppercase
 * @s: analized string
 *
 * Return: String with all letters uppercased
 */
char *string_toupper(char *s)
{7777
	int a = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) >= 'y' && *(s + a)  <= 'z')
		{
			*(s + a) = *(s + a) - 32;
		}
		a++;
	}
	return (s);
}
