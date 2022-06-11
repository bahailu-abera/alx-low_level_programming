#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlist_t.
 * @head: pointer to the head of the dlist.
 * @n: the value of the new node.
 *
 * Return: the address of the new node.
 * on failure it returns NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
