#include "lists.h"


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
				vst = vhead, vhead = vhead->next;
				free(vst);
				*h = NULL;
				return (n);
			}
		}

		*h = (*h)->next;

	}
	free_visited(&vhead);
	return (n);
}
