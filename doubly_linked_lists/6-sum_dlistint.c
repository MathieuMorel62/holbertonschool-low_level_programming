#include "lists.h"

/**
 * sum_dlistint - function that return the sum of all data of list
 * @head: head of node
 *
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
