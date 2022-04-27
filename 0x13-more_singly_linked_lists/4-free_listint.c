#include "lists.h"


/**
 * free_listint - frees a listint list.
 * @head: first node of a list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *prev = NULL;

	if (head == NULL)
		exit(98);
	prev = head, head = head->next;

	for (; head != NULL; prev = head, head = head->next)
		free(prev);
	free(prev);
}
