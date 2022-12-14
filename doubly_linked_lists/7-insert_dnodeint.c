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
	unsigned int i;
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	idx--;

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
