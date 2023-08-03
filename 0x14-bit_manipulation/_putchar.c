#include "main.h"
#include <unistd.h>
/**
 * _putchar - put character c to stdout
 * @c: character to be printed
 *
 * Return: 1 for success
 * error will return -1 and is appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
