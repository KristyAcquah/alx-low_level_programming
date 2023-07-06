#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the bit at a given index
 * @n: pointer to the number
 * @index: index of the bit to be set
 *
 * Return: 1 on success, -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
