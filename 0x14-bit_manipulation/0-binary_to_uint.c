#include "main.h"
/**
 * binary_to_uint - To converts binary number to unsigned int
 * @: string with the binary number
 *
 * Return: number which is converted
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (v = 0; b[i]; v++
	{

		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
