#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - create a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write
 *
 * Return: --1 if function fails -1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int find, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	find = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(find, text_content, len);

	if (find == -1 || w == -1)
		return (-1);

	close(find);

	return (1);
}
