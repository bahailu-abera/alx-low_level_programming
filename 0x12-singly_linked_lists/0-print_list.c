#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next, n++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
	}

	return (n);
}
