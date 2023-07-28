#include <stdlib.h>
#include "lists.h"

/**
 * List_len - Returns the num of elements in a linked list
 * @o: Pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *o)
{
	size_t o = 0;

	while (o)
	{
		n++;
		o = o->next;
	}
	return (n);
}
