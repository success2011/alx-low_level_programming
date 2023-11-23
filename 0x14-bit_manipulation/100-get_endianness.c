#include "main.h"

/**
 * get_endianness - This is to check Machine for endian
 * Return: Big is 0 while little 1
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return (*c);
}
