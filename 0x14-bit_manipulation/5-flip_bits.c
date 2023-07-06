#include "main.h"
#include <stdio.h>

/**
 * flip_bits - count the number of bit
 * @n: first number
 * @m: second number
 *
 * Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, read = 0;
	unsigned long int cover;
	unsigned long int expection = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		cover = expection >> y;
		if (cover & 1)
			read++;
	}

	return (read);
}
