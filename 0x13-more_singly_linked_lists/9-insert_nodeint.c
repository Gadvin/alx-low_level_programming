#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a new node to a linked list
 * @head: address of the head
 * @idx: index for the new node
 * @n: the data to insert
 * 
 * Description: function to insert a new node to a linked list
 * Return: pointer for the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!current || !head)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			current->next = temp->next;
			temp->next = current;
			return (current);
		}
		else
		{
			temp = temp->next;
		}
	}

	return (NULL);
}

