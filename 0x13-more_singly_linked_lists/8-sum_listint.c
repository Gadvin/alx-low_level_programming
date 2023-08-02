#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

#include "lists.h"

/**
 * sum_listint - function to sum all the intergers in a linked list
 * @head: address to the head of a linked list
 *
 * Description: function to sum all the intergers in a linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sumation = 0;

	listint_t *current = head;

	while (current)
	{
		sumation += current->n;
		current  =current->next;
	}

	return (sumation);
}

