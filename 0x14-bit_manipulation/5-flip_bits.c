#include "main.h"

/**
 * flip_bits - enumerate the number of bit to change
 * from one number to another
 * @n: 1st num
 * @m: second num
 *
 * Return: bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int u, count = 0;
	unsigned long int active;
	unsigned long int different = n ^ m;

	for (u = 63; u >= 0; u--)
	{
		active = different >> u;
		if (active & 1)
			count++;
	}

	return (count);
}
