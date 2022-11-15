#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: list
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t numNode = 0;

	while (h != NULL)
	{
		{
			printf("%d\n", h->n);
		}
		numNode++;

		h = h->next;
	}
	return (numNode);
}
