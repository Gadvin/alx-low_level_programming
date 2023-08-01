#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function to return the number of elements in a list
 * @h: head of the linked list
 *
 * Description: function to return the number of elements in a list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count_ele = 0;

	while (h != NULL)
	{
		h = h->next;
		count_ele++;
	}

	return (count_ele);
}
