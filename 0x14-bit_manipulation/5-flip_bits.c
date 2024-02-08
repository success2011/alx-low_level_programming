#include "main.h"

/**
 * flip_bits - This is to count bits for change
 * @n: The 1st Number
 * @m: The 2nd Number
 *
 * Return: This is the Bit Number for change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, add = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		now = exclusive >> z;
		if (now & 1)
			add++;
	}

	return (add);
}
