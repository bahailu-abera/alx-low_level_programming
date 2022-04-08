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
	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
