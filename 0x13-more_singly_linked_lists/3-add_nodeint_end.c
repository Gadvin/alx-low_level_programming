#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the end
 * @head: head of the linked list
 *
 * Return: an address to the new elements or Null if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode;
	listint_t *current_node = malloc(sizeof(listint_t));

	current_node->n = n;
        current_node->next = NULL;

	if (curent_node == NULL)
		return NULL;

	if (*head == NULL)
	{
		*head = current_node;
	}

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}

	lastnode->next = current_node;

	return current_node;
}
