#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index.
 * @h: pointer to the head of the dlistint linked list.
 * @idx: the position of the new node.
 * @n: the value of the newv node.
 *
 * Return: the address of the new node.
 * on failure it returns NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new, *cur;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	cur = *h;
	if (cur == NULL)
		return (NULL);

	for (; cur->next != NULL && index < idx; cur = cur->next, index++)
		;
	if (index + 1 == idx)
		return (add_dnodeint_end(h, n));
	if (index == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = cur->prev;
		new->next = cur;
		cur->prev->next = new;
		cur->prev = new;
		return (new);
	}

	return (NULL);
}
