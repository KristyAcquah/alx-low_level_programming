#include "main.h"

/**
 * print_triangle - entry point
 * Description: i print diagonals
 * @size: size if the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int rows, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (spaces = size - rows; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= rows; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
