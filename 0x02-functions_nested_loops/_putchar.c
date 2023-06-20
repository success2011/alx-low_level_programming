#include <unistd.h>

/**
 * _putchar - write to prints _putchar, followed by a new line
 * character C
 * Return: On Success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
