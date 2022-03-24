#include "main.h"

/**
 * _strcmp - copies a string
 *
 * @s1: the holder of the string
 * @s2: The source of the string
 *
 * Return: string(dest)
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;

	while ((*(s1 + index) != '\0') || (*(s2 + index) != '\0'))
	{
		if (*(s1 + index) - *(s2 + index) != 0)
		{
			return (*(s1 + index) - *(s2 + index));
		}

		index++;
	}

	return (0);
}
