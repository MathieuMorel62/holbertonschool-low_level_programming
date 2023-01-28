#include "lists.h"

/**
 * free_list - function that free a list_t
 * @head: parameter that point to the head
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);

		head = tmp;
	}
}
