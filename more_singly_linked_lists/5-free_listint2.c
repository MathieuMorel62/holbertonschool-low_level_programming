#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
