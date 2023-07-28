#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to print all the items in a linked list
 * @h: a pointer to the list_t list to print
 *
 * Return: print the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}

	return (num_elements);
}

