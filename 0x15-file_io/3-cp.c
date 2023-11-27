#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This is will allocate to a buffer 1024 bytes
 * @file: This is the buffer storing chars
 * Return: This is to point to buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - This is to close file
 * @fd: This is the file descriptor
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This is to copy from one file to another
 * @argc: This is the Number of Arguments in program
 * @argv: This is Array of pointer for Argument
 *
 * Return: Success 0
 *
 * Description: When the counting of argument wrong - exit code 97.
 * When file_from could not be read or does not exist - exit code 98.
 * When file_to could not be created or not written - exit code 99.
 * When file_to or file_from could not be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, v, a;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	v = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		a = write(to, buffer, v);
		if (to == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		v = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (v > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
