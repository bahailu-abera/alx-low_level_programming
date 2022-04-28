#include "lists.h"


/**
 * reverse_listint - everses a listint_t linked list.
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: reveresed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *cur;

	if (head == NULL)
		return (NULL);

	prev = *head;

	if (prev == NULL)
		return (NULL);

	while ((cur = prev->next))
	{
		prev->next = cur->next;
		cur->next = *head;
		*head = cur;
	}

	return (*head);
}
