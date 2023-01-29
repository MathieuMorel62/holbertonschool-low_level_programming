#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h:
 *
 * Return:
*/

size_t free_listint_safe(listint_t **h) 
{
	listint_t *temp = *h, *current = *h;
	size_t len = 0;

	while (current)
	{
		len++;
		if (current->next == *h)
		{
			current->next = NULL;
		}
		temp = current;
		current = current->next;
		free(temp);
	}
	*h = NULL;
	return (len);
}
