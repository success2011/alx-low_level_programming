#include "main.h"

/**
 * print_binary - This is to print Binary in Decimal Number
 * @n: This is the Number printed for Binary
 */
void print_binary(unsigned long int n)
{
	int z, add = 0;

	unsigned long int now;

	for (z = 63; z >= 0; z--)
	{
		now = n >> z;

		if (new & 1)
		{
			_putchar('1');
			add++;
		}
		else if (add)
			_putchar('0');
	}
	if (!add)
		_putchar('0');
}
