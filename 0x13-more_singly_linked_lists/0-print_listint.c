#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function to print all elements of a list
 * @h: head of the linked list
 *
 * Description: function to print all elements of a list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_ele = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count_ele++;
		h = h->next;
	}

	return (count_ele);
}
