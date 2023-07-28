#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: the  list to be freed
 */
void free_list(list_t *head)
{
	list_t *tem;


	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}

