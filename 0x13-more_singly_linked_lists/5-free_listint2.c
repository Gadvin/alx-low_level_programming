#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2- function to free a linked list header
 * @head: head of the linked list
 *
 * Description: function to free a linked list header
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
