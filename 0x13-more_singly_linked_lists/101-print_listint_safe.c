#include "lists.h"

/**
 * print_listint_safe - prints the elements of a list
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
		printf("[%p] %d\n", (void *)cur, cur->n);
		cur = nex;
	}
	if (cur)
		printf("-> [%p] %d\n", (void *)cur, cur->n);

	free(temp);
	return (n);
}
