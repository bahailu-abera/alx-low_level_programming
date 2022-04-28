#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: the head of the linked list
 *
 * Return: the address of the node where the node starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node;

	if (head)
		node = head->next;

	if (node)
		node = node->next;

	while (node != NULL)
	{
		if (head == node)
			return (head);
		head = head->next, node = node->next;
	}

	return (NULL);
}
