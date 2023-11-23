#include "main.h"

/**
 * clear_bit - This is to set the value of bit to 0
 * @n: This is Number of Pointer for change
 * @index: This is Bit Index
 *
 * Return: 1 On Success, Failture -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
