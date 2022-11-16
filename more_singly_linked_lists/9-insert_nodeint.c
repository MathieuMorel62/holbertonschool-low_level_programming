#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node 
 * @head: pointer to the head of the list
 * @idx: index to insert a new node
 * @n: new node data
 *
 * Return: adress of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	tmp = *head;

	for (i = 0; i < (idx - 1); i++)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
