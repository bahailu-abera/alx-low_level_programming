#include "lists.h"

/**
 * print_listint - prints the elements of a list
 *
 * @h: first node of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next, n++)
		printf("%d\n", h->n);

	return (n);
}
