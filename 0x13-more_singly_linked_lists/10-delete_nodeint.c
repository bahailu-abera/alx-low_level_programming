#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: first node of the linked list
 * @index: the position of the node to to be deleted
 *
 * Return: 1 (success) or -1 (failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *cur;
	size_t n = 0;

	if (head == NULL)
		return (-1);

	for (cur = *head, prev = NULL; cur != NULL && n != index;
			prev = cur, cur = cur->next)
		n++;
	if (cur == NULL)
		return (-1);
	if (prev == NULL)
		*head = cur->next;
	else
		prev->next = cur->next;
	free(cur);

	return (1);
}
