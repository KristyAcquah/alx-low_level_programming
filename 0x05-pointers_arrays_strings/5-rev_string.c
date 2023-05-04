#include "main.h"
#include <stdio.h>

/**
 * rev_string - print reverse of a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		reverse = s[0];
		s[i] = s[c];
		s[c] = reverse;
	if (i >= c)
		break;
	}
}
