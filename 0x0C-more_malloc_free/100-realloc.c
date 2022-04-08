#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * using malloc and free
 *
 * @ptr: the array
 * @old_size: the size of
 * the ptr in byte
 * @new_size: the new allocated
 * memory size
 *
 * Return: pointer to
 * the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i, size;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}

	if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		size = old_size;
	else
		size = new_size;

	nptr = malloc(size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; sizeof(*ptr) * (i + 1) <= size; i++)
		nptr[i] = ptr[i];

	return (nptr);
}
