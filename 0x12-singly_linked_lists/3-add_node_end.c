#include "lists.h"


/**
 * add_node_end - add a node at the end of a linked list
 *
 * @head: pointer to the first node of the linked list
 * @str: the string value of the node
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cur, *prev;

	cur = *head, new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	for (prev = cur; cur != NULL; prev = cur, cur = cur->next)
		;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (prev == NULL)
		*head = new_node;

	else
		prev->next = new_node;

	return (new_node);
}

