#include "lists.h"

/**
 * free_dlistint - frees memory allocated for dlist.
 * @head: pointer to the head of dlist.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	for (; head->next != NULL; head = head->next)
		free(head->prev);
	free(head->prev);
	free(head);
}
