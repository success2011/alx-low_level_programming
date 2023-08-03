#include "main.h"

/**
 * set_bit - put a bit a given index to 1
 * @y: indicating the number for change
 * @indx: set index of a bit to 1
 *
 * Return:success 1, failure -1
 */
int set_bit(unsigned long int *y, unsigned int indx)
{
	if (indx > 63)
		return (-1);

	*y = ((1UL << indx) | *y);
	return (1);
}
