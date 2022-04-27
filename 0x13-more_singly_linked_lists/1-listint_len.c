#include "lists.h"

/**
 * listint_len - returns number of list elements
 *
 * @h: first node of the list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next, n++)
		;

	return (n);
}
