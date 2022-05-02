#include "lists.h"
#include "4-free_listint.c"


/**
 * free_list - frees memory allocated by malloc
 * @head: the head of the linked list
 *
 * Return: void
 */

void  free_list(visited_t **head)
{
	visited_t *prev = NULL;

	if (head != NULL)
	{

		while ((prev = *head) != NULL)
		{
			*head = (*head)->next;
			free(prev);
		}
		*head = NULL;

	}

}

/**
 * print_listint_safe - prints the elements of a list
 *
 * @h: first node of the list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *h)
{
	size_t n = 0;
	visited_t *new, *vhead, *cur;

	vhead = NULL;

	for (; h != NULL; h = h->next, n++)
	{
		new = malloc(sizeof(visited_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)h;
		new->next = vhead;
		vhead = new;
		cur = vhead;

		while (cur->next != NULL)
		{
			cur = cur->next;
			if (cur->p == h)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				free_list(&vhead);
				return (n);
			}
		}

		printf("[%p] %d\n", (void *)h, h->n);
	}
	free_list(&vhead);
	return (n);
}
