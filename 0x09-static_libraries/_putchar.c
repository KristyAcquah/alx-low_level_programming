#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error -1 is returned, and errno i set appropriatel
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
