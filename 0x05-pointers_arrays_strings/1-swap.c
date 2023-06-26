#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @y: integer to swap
 * @z: integer to swap
 */
void swap_int(int *y, int *z)
{
	int m;

	m = *y;
	*y = *z;
	*z = m;
}
