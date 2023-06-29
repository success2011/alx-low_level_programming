#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int v;
	int t;

	for (v = 0; v < n--; v++)
	{
		t = a[v];
		a[v] = a[n];
		a[n] = t;
	}
}
