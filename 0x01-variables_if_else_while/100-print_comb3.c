#include <stdio.h>
/**
* main - prints all possible different combinations of two digits
* Return: 0 (Passed)
*/
int main(void)
{
	int n, m;

	for (n = '0'; n < '9'; n++)
	{
	
	for (m = n + 1; m <= '9 m++)
	{
	if (m != n)
	{
	putchar(n);
	putchar(m);
	if (n == '8' && == '9')
	continue;
	putchar(',');
	putchar(' ')
	}
	}
	}
	putchar('\n');	
	return (0);
}
