#include "lists.h"


/**
 * free_visited - frees memory allocated by malloc
 * @head: the head of the linked list
 *
 * Return: void
 */

void  free_visited(visited_t **head)
{
	visited_t *prev = NULL, *vst;

	if (head != NULL)
	{
		vst = *head;

		while ((prev = vst) != NULL)
		{
			vst = vst->next;
			free(prev);
		}
		*head = NULL;

	}

}

/**
 * free_listint_safe - frees the elements of a list
 *
 * @h: first node of the list
 *
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	visited_t *new, *vhead, *vst;
	listint_t *prev;

	if (h == NULL)
		return (0);

	vhead = NULL;

	for (; *h != NULL; *h = (*h)->next, n++)
	{
		new = malloc(sizeof(visited_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = vhead;
		vhead = new;
		vst = vhead;

		while (vst->next != NULL)
		{
			vst = vst->next;
			if (vst->p == *h)
			{
				*h = NULL;
				free_visited(&vhead);
				return (n);
			}
		}

		prev = *h;
		*h = (*h)->next;
		free(prev);

	}
	*h = NULL;
	free_visited(&vhead);
	return (n);
}
