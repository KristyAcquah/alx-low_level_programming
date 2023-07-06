#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the binary number
 * @n: the number to be printed
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int cover;
	int a, read = 0;
       
	for (a = 63; a >= 0; a--)
	{
		cover = n >> a;

		if (cover & 1)
		{
			_putchar('1');
			read++;
		}
		else if (read)
			_putchar('0');
	}

	if (!read)
		_putchar('0');
}
