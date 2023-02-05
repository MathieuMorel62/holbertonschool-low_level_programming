#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of node
 * @index: index of the node
 *
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth;

	if (head == NULL)
		return (NULL);

	for (nth = 0; nth < index && head != NULL; nth++)
	{
		head = head->next;
	}
	return (head);
}
