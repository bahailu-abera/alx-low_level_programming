#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the holder of the string
 * @src: The source of the string
 * @n: length of the of string
 *
 * Return: string(dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_index;

	src_index = 0;

	while ((*(src + src_index) != '\0') && (src_index != n))
	{
		*(dest + src_index) = *(src + src_index);
		src_index++;
	}

	if (*(src + src_index) == '\0')
	{
		*(dest + src_index) = '\0';
	}

	return (dest);
}
