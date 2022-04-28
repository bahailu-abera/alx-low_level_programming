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
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	curr = *head, prev = curr;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	do {

		if (i == idx)
		{
			new_node->n = n;
			new_node->next = curr;

			if (i == 0)
				*head = new_node;
			else
				prev->next = new_node;
			return (new_node);
		}

	} while ((prev = curr) && ++i && (curr = curr->next));

	if (i == idx)
	{
		new_node->n = n;
		new_node->next = NULL;
		prev->next = new_node;

		return (new_node);
	}
	free(new_node);

	return (NULL);
}
