#include "lists.h"

/**
 * free_dlistint - Function to free a doubly linked list
 * @head: pointer to head of DLL to free
 *
 * Return: always void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
