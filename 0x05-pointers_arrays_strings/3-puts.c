#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed to stdout
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
