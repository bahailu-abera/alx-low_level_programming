#include "lists.h"


/**
 * pop_listint - return the value of the head node
 *
 * @head: pointer to the head of the node
 *
 * Return: the value of the head
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head != NULL)
	{
		if (*head == NULL)
			return (0);

		first = *head, *head = (*head)->next;
		n = first->n;
		free(first);

		return (n);
	}

	return (0);
}
