#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocation of 1024 bytes to a buffer
 * @file: Files name for the buffer
 *
 * Return: Pointer to buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - This is to close file descriptors
 * @fd: The descriptor file
 */
void close_file(int fd)
{
	int z;

	z = close(fd);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This is to make copies the file to another file
 * @argc: The arguments in the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Success 0
 *
 * Description: wrong argument - exit code 97.
 * If unable to read file_from or  does not exist - exit code 98.
 * If unable to create file_to or written - exit code 99.
 * If unable to close file_to - exit code 100.
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, _read, _write;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	filefrom = open(argv[1], O_RDONLY);
	_read = read(filefrom, buf, 1024);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (filefrom == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		_write = write(fileto, buf, _read);
		if (fileto == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		_read = read(filefrom, buf, 1024);
		fileto = open(argv[2], O_WRONLY | O_APPEND);

	} while (_read > 0);

	free(buf);
	close_file(filefrom);
	close_file(fileto);

	return (0);
}
