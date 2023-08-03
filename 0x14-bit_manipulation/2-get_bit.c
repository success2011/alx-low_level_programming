#include "main.h"

/**
 * get_bit - returning bit valu at index of a decimal number
 * @z:number you need to search
 * @indx: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int z, unsigned int indx)
{
	int bit_val;

	if (indx > 63)
		return (-1);

	bit_val = (z >> indx) & 1;

	return (bit_val);
}
