#include "lists.h"

/**
 * get_dnodeint_at_index - function to get a node at an index
 *
 * @head: pointer to head of DLL
 * @index: index of node to look for
 *
 * Return: succes is pointer to node if found, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
