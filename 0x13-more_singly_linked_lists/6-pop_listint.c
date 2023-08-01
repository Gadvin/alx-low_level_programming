#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * pop_listint - function to delete the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data deleted, or 0there is no data
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int number;

	if (!head || !*head)
	{
		return (0);
	}

	number = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (number);
}
