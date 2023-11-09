#include "lists.h"

/**
 * sum_dlistint - function to sum elements of a doubly linked list
 * @head: pointer to head of DLL
 *
 * Return: sum of all elements, 0 if DLL is NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sumation = 0;

	while (head)
	{
		sumation += head->n;
		head = head->next;
	}
	return (sumation);
}
