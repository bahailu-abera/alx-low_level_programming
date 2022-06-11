#include "lists.h"

/**
 * sum_dlistint - all the data(n) of a dlistint linked list.
 * @head: the head of the linked list.
 *
 * Return: the sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	for (; head != NULL; head = head->next)
		total += head->n;

	return (total);
}
