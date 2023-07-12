#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * read_textfile - Read text file to print STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: acual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t find;
	ssize_t w;
	ssize_t tall;

	find = open(filename, O_RDONLY);
	if (find == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	tall = read(find, buf, letters);
	w = write(STDOUT_FILENO, buf, tall);

	free(buf);
	close(find);
	return (w);
}
