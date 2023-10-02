#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This is to read the text file for printing
 * @filename: This is the text file to be read for printing
 * @letters: This is Read Number of Letters
 * Return: nb - This is Number of Bytes
 *        If Function did not work 0 or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fb;
	ssize_t nb;
	ssize_t k;

	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(fb, buf, letters);
	nb = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(fb);
	return (nb);
}
