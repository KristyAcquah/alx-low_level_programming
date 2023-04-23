#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 56; n++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > n)
			{
				putchar(n);
				putchar(n);
				if (n != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
