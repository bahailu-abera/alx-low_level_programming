#include "main.h"

/**
 * _strncat - concatenates two strings of n elements
 *
 * @dest: The destination of the string
 * @src: The source of the string
 * @n: the length of the string to concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_index;
	int dest_index;

	src_index = 0;
	dest_index = 0;

	while (*(dest + dest_index) != '\0')
	{
		dest_index++;
	}
	while ((src_index != n) && (*(src + src_index) != '\0'))
	{
		*(dest + dest_index) = *(src + src_index);
		src_index++;
		dest_index++;
	}
	*(dest + dest_index) = '\0';

	return (dest);
}

