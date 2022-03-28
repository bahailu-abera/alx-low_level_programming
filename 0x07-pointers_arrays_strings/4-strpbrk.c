#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 *
 * @s: the actual string
 * @accept: the substring
 *
 * Return: pointer to the byte
 */


char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
