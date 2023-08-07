#include "main.h"

/**
 * create_file - This is to creates a file
 * @filename: It is pointing to the name of the created file
 * @text_content: Ppointing to the string
 *
 * Return: Success is 1 while fail is -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _write, men = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (men = 0; text_content[men];)
			men++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(fd, text_content, men);

	if (fd == -1 || _write == -1)
		return (-1);

	close(fd);

	return (1);
}
