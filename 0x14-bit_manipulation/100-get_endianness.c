#include "main.h"

/**
 * get_endianness - is the machine small or big endian
 * Return: big is 0, small is 1
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *d = (char *) &b;

	return (*d);
}
