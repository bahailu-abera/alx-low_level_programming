#include "lists.h"


/**
 * free_listint2 - frees a listint list.
 * @head: first node of a list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *prev, *cur;

	if (head != NULL)
	{
		cur = *head

		while ((prev = cur) != NULL)
		{
			cur = cur->next;
			free(prev);
		}
		*head = NULL;
	}
}
