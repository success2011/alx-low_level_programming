#include "main.h"

/**
 * clear_bit - put a bit a given index to 1
 * @z: indicating the number for change
 * @indx: set index for clear
 *
 * Return:success 1, failure -1
 */
int clear_bit(unsigned long int *z, unsigned int indx)
{
	if (indx > 63)
		return (-1);

	*z = (~(1UL << indx) & *z);
	return (1);
}
