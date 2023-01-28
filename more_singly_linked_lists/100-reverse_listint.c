#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node of the list.
 *
 * Return: a pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	prev = *head;
	next_node = prev->next;
	*head = next_node->next;

	prev->next = NULL;

	while ((*head)->next != NULL)
	{
		next_node->next = prev;
		prev = next_node;
		next_node = (*head);
		*head = (*head)->next;
	}

	(*head)->next = next_node;
	next_node->next = prev;
	return (*head);
}
