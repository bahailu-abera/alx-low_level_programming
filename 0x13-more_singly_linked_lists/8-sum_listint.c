#include "lists.h"

/**
 * sum_listint - adds all the values of the nodes
 *
 * @head: head of the linked list
 *
 * Return: the sum of the elements
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
