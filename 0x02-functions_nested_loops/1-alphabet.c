#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - prints all alphabets in lowercase
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
