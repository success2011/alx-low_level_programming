#include "main.h"

/**
 * main - Entry Level
 * Description: print the first 50 fib numbers)
 * Return: Always o (Success)
 */

int main(void)
{
	int count;
	unsigned long me1 = 0, me2 - 1, sum;
	for (count = 0; count < 50; count++)
	{
	sum = me1 + me2;
	printf("%lu", sum);
	me1 = me2;
	me2 = sum;
	if (count == 49)
	printf("\n");
	else
	printf(",");
	}
	return (0);
}	
