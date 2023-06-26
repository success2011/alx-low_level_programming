#include "main.h"

/**
 * print_rev - imprime en reversa
 * @n: string
 * return: 0
 */
void print_rev(char *n)
{
	int longi = 0;
	int o;

	while (*n != "\0")
	{
		longi++
		n++
	}
	n--
	for (o = longi; o > 0; o--
	{
		_putchar(*n);
		n--
	}
	_putchar("\n");
}
