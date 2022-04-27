#include "lists.h"

/**
 * free_list - frees list_t list
 *
 * @head: the first node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *prev, *cur;

	prev = NULL, cur = head;

	for (; cur != NULL; prev = cur, cur = cur->next)
	{
		if (prev != NULL)
			free(prev->str);
		free(prev);
	}
	if (prev != NULL)
		free(prev->str);
	free(prev);
	free(cur);
}
