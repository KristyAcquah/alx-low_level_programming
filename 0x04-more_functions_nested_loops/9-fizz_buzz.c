#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * for multiples of 3 print Fizz
 * for the multiples of 5 print Buzz
 * for multiples of both 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}