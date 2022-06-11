#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: the index of the node
 * @head: the head of the dlistint linked list.
 *
 * Return: the node at postion index.
 * on failure it returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	for (; head->next != NULL && n < index; head = head->next, n++)
		;
	if (n == index)
		return (head);

	return (NULL);
}
