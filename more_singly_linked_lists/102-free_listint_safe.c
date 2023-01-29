#include "lists.h"

/**
 * free_looped_list - function that frees a looped list of multiple elements.
 * @head: pointer to the head of the list
*/

void free_looped_list(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return:  the number of nodes in the list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *pointer_list, *new, *add;
	listint_t *current;

	pointer_list = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = pointer_list;
		pointer_list = new;

		add = pointer_list;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_looped_list(&pointer_list);
				return (nnodes);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		nnodes++;
	}
	*h = NULL;
	free_looped_list(&pointer_list);
	return (nnodes);
}
