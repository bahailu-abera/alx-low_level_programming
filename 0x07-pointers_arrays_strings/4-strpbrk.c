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
	unsigned int i = 0;
	unsigned int j;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		if (*(s + i) == *(accept + j))
		{
			return (s + i);
		}
		i++;
	}
	j = 0;

	while (*(accept + j) != '\0')
	{
		if (*(s + i) == *(accept + j))
		{
			return (s + i);
		}
		j++;
	}
	return ('\0');
}
