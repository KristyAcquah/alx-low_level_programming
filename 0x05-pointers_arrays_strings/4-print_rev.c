#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	
	while (s[1] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
	return (i);
}
