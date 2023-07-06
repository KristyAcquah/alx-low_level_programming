#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit
 * @n: number to find
 * @index: index of the number
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
