#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	listint_t *head = NULL;

	free_listint2(&head);
	printf("%p\n", (void *)head);
	return (0);
}
