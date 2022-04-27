#include "lists.h"

/**
 * add_node - adds a new node at the
 * beggining of a list_t
 *
 * @head: address of head
 * @str: a pointer to the string of the new node
 *
 * Return: the head of the linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
