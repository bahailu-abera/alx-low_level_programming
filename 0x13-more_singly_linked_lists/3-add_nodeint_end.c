#include "lists.h"


/**
 * add_nodeint_end - add a node at the end of a linked list
 *
 * @head: pointer to the first node of the linked list
 * @n: integer number
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new_node, *cur;

	cur = *head, new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (cur == NULL)
	{
		*head = new_node;
		return (*head);
	}

	for (; cur->next != NULL; cur = cur->next)
		;
	cur->next = new_node;

	return (new_node);
}

