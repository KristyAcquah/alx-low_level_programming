#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - print alphabets in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	char c;

	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);

		_putchar('\n');
		i++;
		}
	}
}
