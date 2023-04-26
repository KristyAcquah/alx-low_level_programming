#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - print alphabets in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
