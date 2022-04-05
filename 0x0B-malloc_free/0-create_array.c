#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: the size of the memory to be allocated
 * @c: The character to be initialized
 *
 * Return: NUll if (size = 0)
 *        otherwise a pointer to the character
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int count = 0;

	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);

	while (count < size)
	{
		*(str + count) = c;
		count++;
	}
	*(str + count) = '\0';
	return (str);
}
