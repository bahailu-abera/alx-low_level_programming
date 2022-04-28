#include "lists.h"

/**
 * print_listint - prints the elements of a list
 *
 * @h: first node of the list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *h)
{
	size_t n = 0;
	listint_t *temp = malloc(sizeof(listint_t)), *nex, *cur;

	cur = (void *)h;

	for (; cur != NULL && cur->next != temp; n++)
	{
		nex = cur->next;
		cur->next = temp;
		printf("[%p] %d\n", (void *)&(cur->n), cur->n);
		cur = nex;
	}

	free(temp);
	return (n);
}
