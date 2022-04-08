#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - allocates memory of size b
 *
 * @b: The size of the memory to allocate in byte
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
