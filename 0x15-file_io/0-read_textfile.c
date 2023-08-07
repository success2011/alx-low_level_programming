#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -This is to read text file that print to the STDOUT.
 * @filename: The read text file
 * @letters: Amount of letters which is to be read
 * Return: w- the real number of bytes which read and printed
 *        fails function is 0 or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t _write;
	ssize_t _read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	_read = read(fd, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	free(buffer);
	close(fd);
	return (_write);
}
