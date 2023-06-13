#include "main.h"
/**
 * print_binary - prints the binary equivalent to a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, number = 0;
	unsigned long int new;

	for (x = 63; x >= 0; x--)
	{
		new = n >> x;

		if (new & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number == 0)
			_putchar('0');
	}
	if (number == 0)
		_putchar('0');
}
