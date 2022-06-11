#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at @index
 * index of a dlistint_t linked list.
 * @head: pointer to the head of the dlistint_t linked list.
 * @index: the position of the node to be deleted.
 *
 * Return: 1 on success and -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *cur;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;

	for (; cur->next != NULL && idx < index; cur = cur->next, idx++)
		;
	if (idx == index)
	{
		if (cur->prev == NULL)
		{
			*head = cur->next, free(cur), cur = NULL;
			if (*head != NULL)
				(*head)->prev = NULL;
			return (1);
		}

		cur->prev->next = cur->next;

		if (cur->next != NULL)
			cur->next->prev = cur->prev;
		free(cur), cur = NULL;
		return (1);
	}

	return (-1);
}
