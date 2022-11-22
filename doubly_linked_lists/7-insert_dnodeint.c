#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @h: head of node
 * @idx: index to insert a new node
 * @n: date for new node
 *
 * Return: adress of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;
	tmp = *h;

	if (idx == 0)
	{
		*h = new;
		new->next = tmp;
		new->prev = NULL;
		tmp->prev = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		if (i == idx)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			new->next->prev = new;
		}
		tmp = tmp->next;
		i++;
	}
	if (i == idx)
	{
		new->prev = tmp;
		new->next = NULL;
		tmp->next = new; 
	}
	if (i < idx)
		return (NULL);

	return (new);
}
