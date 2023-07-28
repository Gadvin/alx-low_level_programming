#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print all the items in a linked list
 * @h: a pointer to the list_t list to print
 *
 * Return: print the number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num_elements++;
	}

	return (num_elements);
}

