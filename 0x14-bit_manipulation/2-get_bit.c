#include "main.h"

/**
 * get_bit - This is to Return Value of the Bit in Decimal Number
 * @n: This is for searching Number
 * @index: This is bit for Index
 *
 * Return: This is bit Value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int dit_gal;

	if (index > 63)
		return (-1);

	dit_gal = (n >> index) & 1;

	return (dit_gal);
}
