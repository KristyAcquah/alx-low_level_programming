#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 *
 * Return: --1 if function fails or filename is NULL
 * if the file does not exist, -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
				len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
