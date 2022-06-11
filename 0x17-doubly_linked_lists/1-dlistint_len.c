#include "lists.h"

/**
 * dlistint_len - a function that determines the length of
 * doubly linked list
 * @h: the header of the dlist.
 *
 * Return: the length of the dlist
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next, len++)
		;
	return (len);
}
