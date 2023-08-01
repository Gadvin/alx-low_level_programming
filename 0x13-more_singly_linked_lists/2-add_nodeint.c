#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Function to add node at the begining
 * @head: Heah of the linked list
 * @n: Inter value to be added
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));

	if (current == 0)
		return  (NULL);
	
	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
