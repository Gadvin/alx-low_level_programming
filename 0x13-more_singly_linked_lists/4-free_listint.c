#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the linked list
 *
 * Description: frees a linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;


	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
