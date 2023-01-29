#include "lists.h"

/**
 * sum_listint - function that return the sum of all data of list
 * @head: pointer to the head of the list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
