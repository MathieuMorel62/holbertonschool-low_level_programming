#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head != NULL)
	{
		tempo = head->next;
		free(head);

		head = tempo;
	}
}
