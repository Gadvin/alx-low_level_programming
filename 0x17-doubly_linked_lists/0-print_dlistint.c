#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - funtion to print a doubly linked list
 * @h: pointer to the head of doubly linked list
 *
 * Return: when successful it will display number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
