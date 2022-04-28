#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: head of the linked list
 * @index: index of the node to be returned
 *
 * Return: the node value at the specified index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	for (; head != NULL; head = head->next, count++)
	{
		if (count == index)
			return (head);
	}

	return (NULL);
}


