#include "main.h"

/**
 * append_text_to_file - This is to append text in file end
 * @filename: This is to Point the name of file created
 * @text_content: This is string to be added
 * Return: -1 in case of fail function, If there is no
 *	write permissions -1, Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int u, nb, dent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dent = 0; text_content[dent];)
			dent++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	nb = write(u, text_content, dent);

	if (u == -1 || nb == -1)
		return (-1);

	close(u);

	return (1);
}
