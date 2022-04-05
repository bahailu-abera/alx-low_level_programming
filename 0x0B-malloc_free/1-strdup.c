#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str: The string
 *
 * Return: pointer to the newly allocated string(success)
 *         else NULL
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + size) != '\0')
	{
		size++;
	}

	size++;
	newstr = malloc(sizeof(char) * size);

	size = 0;

	while (*(str + size) != '\0')
	{
		*(newstr + size) = *(str + size);
		size++;
	}
	*(newstr + size) = '\0';
	return (newstr);
}
