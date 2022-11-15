#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: list
 *
 * Return: delete head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (data);
}
