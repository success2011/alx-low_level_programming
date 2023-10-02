#include "main.h"

/**
 * create_file - This is to create file
 * @filename: This is to Point the name of file created
 * @text_content: This is to Point to string
 *
 * Return: -1 in case of fail function, if not 1
 */
int create_file(const char *filename, char *text_content)
{
	int fb, nb, dent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dent = 0; text_content[dent];)
			dent++;
	}

	fb = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	nb = write(fb, text_content, dent);

	if (fb == -1 || nb == -1)
		return (-1);

	close(fb);

	return (1);
}
