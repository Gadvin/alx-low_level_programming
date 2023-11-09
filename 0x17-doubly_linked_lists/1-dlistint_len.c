#include "lists.h"

/**
 * dlistint_len - function to return no of elements in DLL
 *
 * @h: pointer to the head of the DLL
 * Return:to return the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_dll;

	count_dll = 0;

	if (h == NULL)
		return (count_dll);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count_dll++;
		h = h->next;
	}

	return (count_dll);
}
