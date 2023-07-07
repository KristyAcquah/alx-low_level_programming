#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check a machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return (*c);
}
