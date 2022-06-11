#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of dlist.
 * @head: pointer to the head of dlist.
 * @n: the value of the new dlist node/
 *
 * Return: the address of the new node.
 * on failure it returns NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *prev, *cur;

	if (head == NULL)
		return (NULL);
	prev = NULL;
	cur = *head;
	for (; cur != NULL; prev = cur, cur = cur->next)
		;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = prev;

	if (prev == NULL)
		*head = new;
	else
		prev->next = new;
	return (new);
}
