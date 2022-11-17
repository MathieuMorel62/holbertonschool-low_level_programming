#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete the node
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head, *del;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index != 0)
	{
		for (i = 1; i < index; i++)
		{
			if (tmp->next == NULL)
				return (-1);

			tmp = tmp->next;
		}
		del = tmp->next->next;
		free(tmp->next);
		tmp->next = del;
		return (1);
	}
	else
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
}
