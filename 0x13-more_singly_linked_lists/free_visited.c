#include "lists.h"


/**
 * free_visited - frees memory allocated by malloc
 * @head: the head of the linked list
 *
 * Return: void
 */

void  free_visited(visited_t **head)
{
	visited_t *prev = NULL;

	if (head != NULL)
	{

		while ((prev = *head) != NULL)
		{
			*head = (*head)->next;
			free(prev->p);
			free(prev);
		}
		*head = NULL;

	}

}
