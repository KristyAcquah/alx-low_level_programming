#include "main.h"

/**
 * flip_bits - counts the number of bit to change
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, read = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y++)
	{
		now = exclusive >> y;

		if (now & 1)
			read++;
	}

	return (read);
}
