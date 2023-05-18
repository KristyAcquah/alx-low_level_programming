#include <unistd.h>
/**
 * _putchar - writes the chanracter c to stdout
 * @c: the character to print
 *
 * Return: 1
 *
 * On error, returned -1 and errno is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
