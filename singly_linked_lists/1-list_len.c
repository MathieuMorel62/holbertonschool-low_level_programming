#include "lists.h"

/**
 * list_len - prints length of list_t
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t numLen = 0;

	while (h != NULL)
	{
		numLen++;
		h = h->next;
	}
	return (numLen);
}
