#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the binary number
 * @n: the number to be printed
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int cover = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bite = 0;

	while (cover > 0)
	{
		bite = (n & cover) ? 1 : 0;
		printf("%d", bite);
		cover >>= 1;
	}

	putchar('\n');
}
