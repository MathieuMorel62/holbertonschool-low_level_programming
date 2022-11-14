#include "lists.h"

/**
 * print_list - print all elements
 * @h: linked list
 *
 * Return: Number of node.
 */

size_t print_list(const list_t *h)
{
	size_t NumNode = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		NumNode++;

		h = h->next;
	}
	return (NumNode);
}
