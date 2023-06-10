#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: string containing the binary number
 *
 * Return: the unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int e;
	unsigned int decimal = 0;

	if (b != 0)
		return (0);

	for (e = 0; b[e];
			e++)
	{
		if (b[e] < '0' || b[e] > 1)
			return (0);
		decimal = 2 * decimal + (b[e] - '0');
	}
	return (decimal);
}
