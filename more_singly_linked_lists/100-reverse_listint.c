#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node of the list.
 *
 * Return: a pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	prev = *head;
	current = prev->next;
	*head = current->next;

	prev->next = NULL;

	while ((*head) != NULL)
	{
		current->next = prev;
		prev = current;
		current = (*head);
		*head = (*head)->next;
	}
	current->next = prev;
	return (current);
}
