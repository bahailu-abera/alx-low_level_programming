#include "main.h"

/**
 * _memset - fills the first n bytes of
 * the memory area pointed to by s
 *
 * @s: the memory pointed to
 * @n: the size of the memory to be filled
 * @b: the constant byte
 *
 * Return: The address
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
