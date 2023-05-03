#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - write char c to stdout 
 * @c: character to be printed
 * Return: On success 1
 * On error, -1 is returned, and errno is set appopriately
 */

int _putchar(char c)
{
	int _putchar(char c);
	return (write(1, &c, 1));
}
