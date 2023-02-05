#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete the node
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: 1 if success or -1 if t failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempo = *head;

	if (head == NULL)
		return (-1);

	if (head != NULL)
	{
		while (index != 0 && tempo != NULL)
		{
			tempo = tempo->next;
			index--;
		}
		if (index != 0)
			return (-1);

		if (index == 0 && tempo != NULL)
		{
			if (tempo->next)
				tempo->next->prev = tempo->prev;
			if (tempo->prev)
				tempo->prev->next = tempo->next;
			else
				*head = tempo->next;
			free(tempo);
			return (1);
		}
	}
	return (-1);
}
