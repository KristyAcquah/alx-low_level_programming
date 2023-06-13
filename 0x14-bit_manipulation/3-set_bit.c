#include "main.h"

/**
 * set_bit - set a bit at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set
 *
 * Return: 1 on success -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
