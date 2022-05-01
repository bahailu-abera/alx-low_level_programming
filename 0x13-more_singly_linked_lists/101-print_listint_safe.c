#include "lists.h"
#include "4-free_listint.c"


/**
 * detect_and_del - detect and remove loop
 * @head: the head of the linked list
 * @loop: node where loop is detected
 *
 * Return: void
 * of linear list
 */

void  detect_and_del(listint_t *head, listint_t **loop)
{
	listint_t *slow, *fast;

	if (head == NULL || (head)->next == NULL)
		return;
	slow = head, fast = head;
	slow = slow->next;
	fast = fast->next->next;

	while (fast && fast->next && slow != fast)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow != fast)
		return;

	slow = head;

	/* if they meet at the head of the linked list */
	if (slow == fast)
	{
		while (fast->next != slow)
			fast = fast->next;
		*loop = fast;
	}
	else
	{
		while (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
		*loop = fast;
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
	listint_t *loop = NULL, *cur;

	detect_and_del((void *)h, &loop);
	cur = (void *)h;
	for (; cur != NULL; cur = cur->next, n++)
	{
		printf("%d\n", cur->n);
		if (cur == loop)
		{
			printf("-> %d\n", cur->next->n);
			cur->next = NULL;
		}
	}

	free_listint((void *)h);

	return (n);
}
