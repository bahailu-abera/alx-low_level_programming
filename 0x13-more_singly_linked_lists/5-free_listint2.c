#include "lists.h"


/**
 * free_listint2 - frees a listint list.
 * @head: first node of a list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *prev = NULL, *cur = NULL;

	if (*head != NULL)
	{
		prev = *head, cur = prev->next;

		for (; cur != NULL; prev = cur, cur = cur->next)
			free(prev);
		free(prev);
		*head = NULL;
	}
}
