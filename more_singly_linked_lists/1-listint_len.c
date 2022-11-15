#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: list
 *
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t numNode = 0;

	while (h != NULL)
	{
		numNode++;
		h = h->next;
	}
	return (numNode);
}
