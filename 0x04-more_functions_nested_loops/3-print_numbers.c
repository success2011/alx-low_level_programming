#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
