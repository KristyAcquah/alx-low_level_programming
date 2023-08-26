#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memmory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int a = n;

	for (; y < a; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
