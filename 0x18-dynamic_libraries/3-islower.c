#include "main.h"
#include <stdio.h>

/**
 * _islower - check if character is lowercase
 * @c:check if character is in lowercase
 *
 * Return:0 if lowercase, 1 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
