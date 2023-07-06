#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit
 * @n: pointer to the number to change
 * @index: index to the bit to clear
 *
 * Return: 1 on success -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
