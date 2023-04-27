#include "main.h"
#include <stdio.h>

/**
 * _isdigit - prints digits between 0 to 9
 * @c: char check for digit
 *
 * Return: 1, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
