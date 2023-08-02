#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the end
 * @head: head of the linked list
 * @n: interger to add
 *
 * Description: function to add a node at the end
 *
 * Return: an address to the new elements or Null if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!current)
	{
		return (NULL);
	}

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = current;

	return (current);
}

