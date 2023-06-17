#include <stdio.h>
/**
* main - prints all possible different combinations of two digits
* Return: 0 (Passed)
*/
int main(void)
{
	int y, z;

	for (y = 48; y <= 56; y++)
	{
	for (z = 49; z <= 57; z++)
	{
	if (z > y)
	{
	putchar(y);
	putchar(z);
	if (y != 56 || z != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
