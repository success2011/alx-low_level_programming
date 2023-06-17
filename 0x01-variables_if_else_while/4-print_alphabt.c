#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the alphabet without q and e.
 * Return: 0 (Passed)
 */
int main(void)
{

	int y;
	for (y = 97; y < 123; y++)
		if (y != 101 && y != 113)

			putchar(y);
	putchar('\n');
	return (0);
}
