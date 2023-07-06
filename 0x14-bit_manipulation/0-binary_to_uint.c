#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number
 * @b: pointer to a string
 *
 * Return: the converted number 0, 1 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		numb = (numb << 1) + (*b - '0');
	}
	return (numb);
}
