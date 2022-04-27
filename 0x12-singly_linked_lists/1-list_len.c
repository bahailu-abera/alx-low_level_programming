#include "lists.h"


/**
 * list_len - compute number of elements in linked list
 * @h: head of the linked list
 *
 * Return: number of elemetns
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next, n++)
		;

	return (n);
}
