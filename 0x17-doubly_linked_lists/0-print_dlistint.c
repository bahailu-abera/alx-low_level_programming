#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: header of the linked list Data Structure
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next, nodes++)
		printf("%d\n", h->n);

	return (nodes);
}
