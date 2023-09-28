#include "main.h"

/**
 * set_bit - This will set the bit to an index of 1
 * @n: This is the Number Pointer for change
 * @index: This is Bit Index which is set at 1
 *
 * Return: On Success is 1, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
