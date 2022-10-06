#include "search_algos.h"
#include <stdio.h>

/**
 * special_print - print message with index and value
 *
 * @list: a pointer to the node to printed
 *
 * Return: void
 */
void special_print(skiplist_t *list)
{
	size_t last = list->index;

	if (list->express)
	{
		printf("Value checked at index [%d] = [%d]\n",
		       (int)list->express->index, list->express->n);
		printf("Value found between indexes [%d] and [%d]\n",
		       (int)list->index, (int)list->express->index);
	}
	else
	{
		printf("Value found between indexes [%d] and",
		       (int)list->index);
		while (list && (last = list->index))
			list = list->next;
		printf(" [%d]\n", (int)last);
	}
}

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: a pointer on the first node where @value is located
 *         (NULL on failure)
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{

	if (!list)
		return (NULL);

	while (list->express && list->express->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n",
		       (int)list->express->index, list->express->n);
		list = list->express;
	}

	if (!list)
		return (NULL);

	special_print(list);
	while (list->next && list->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n",
		       (int)list->index, list->n);
		list = list->next;
	}
	printf("Value checked at index [%d] = [%d]\n",
	       (int)list->index, list->n);
	if (list->n == value)
		return (list);
	return (NULL);
}
