#include "lists.h"

/**
 * dlistint_len - counts number of nodes
 * @h: pointer to first node of linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lenNode = 0;

	while (h != NULL)
	{
		h = h->next;
		lenNode++;
	}
	return (lenNode);
}
