#include "main.h"

/**
 * clear_bit - set the value of a given bit to 0
 * @n: the pointer to the number to be changed
 * @index: index of the bit to clear
 *
 * Return: 1 on success, -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
