#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the head of the linked list
 * @idx: thr position os insertion
 * @n: the number to be inserted
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new_node, *prev;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	curr = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);


	for (prev = curr; curr != NULL; prev = curr, curr = curr->next, count++)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->next = curr;
			if (count == 0)
				*head = new_node;
			else
				prev->next = new_node;

			return (new_node);
		}
	}

	if (count == idx)
	{
		new_node->n = n;
		new_node->next = curr;
		prev->next = new_node;
		return (new_node);
	}

	return (NULL);
}

