#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  function to return the data of a linked list
 * @head: head address of the linked list
 * @index: index of the node to return
 *
 * Description: function to return the data of a linked list
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g = 0;

	listint_t *current = head;

	while (current && g < index)
	{
		current = current->next;
		g++;
	}

	return (current ? current : NULL);
}

