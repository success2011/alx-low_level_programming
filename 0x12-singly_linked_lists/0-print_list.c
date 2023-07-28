#include <stdio.h>
#include "lists.h"

/**
 * Print_list -Prints elements of linked list
 * @h: pointer to the list_t list to print
 *
 * Return: Number of nodes that has printed
 */
size_t print_list(const list_t *p)
{
	size_t v = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		v++;
	}

	return (v);
}
