#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node of a list
 * @head: pointer to the head of the list
 * @index: nth of the node
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	if (head == NULL)
		return (0);

	for (nth = 0; nth < index && head != NULL; nth++)
		head = head->next;

	return (head);
}
