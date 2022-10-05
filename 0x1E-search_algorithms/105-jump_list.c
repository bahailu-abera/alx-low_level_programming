#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 *        if value is not present in head or if head is NULL return (NULL)
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t root;
	listint_t *prev = NULL, *cur;

	if (list == NULL)
		return (NULL);

	root = sqrt(size);
	cur = list;
	while (cur->n < value)
	{
		prev = cur;
		while (cur != NULL && cur->index < prev->index + root)
			cur = cur->next;
		if (cur == NULL)
		{
			root -= 1;
			break;
		}

		printf("Value checked at index [%d] = [%d]\n", (int)cur->index, cur->n);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)prev->index,
	       (int)(prev->index + root));
	while (prev->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		prev = prev->next;
		if (prev == NULL)
			return (NULL);
	}
	printf("Value checked array[%d] = [%d]\n", (int)prev->index, prev->n);
	if (prev->n == value)
		return (prev);

	return (NULL);
}
