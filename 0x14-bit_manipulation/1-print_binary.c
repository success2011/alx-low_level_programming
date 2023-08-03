#include "main.h"

/**
 * print_binary - this is to prints binary equal of a decimal number
 * @v: to print binary number
 */
void print_binary(unsigned long int v)
{
	int p, count = 0;
	unsigned long int active;

	for (p = 63; p >= 0; p--)
	{
		active = v >> p;

		if (active & 1)
		{
			_putchar('1');
			count++;

		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
