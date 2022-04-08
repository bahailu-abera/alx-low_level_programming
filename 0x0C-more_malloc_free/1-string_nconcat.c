#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of the second string characters
 * to concatenate
 * Return:pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len_s1, len_s2, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + count) != '\0' && *(s2 + count) != '\0')
	{
		count++;
	}
	len_s1 = len_s2 = count;
	while (*(s1 + count) != '\0')
	{
		count++;
	}
	len_s1 = count + 1;
	while (*(s2 + len_s2) != '\0')
	{
		len_s2++;
	}
	len_s2 += 1;

	((n >= len_s2) ? (n = len_s2) : (n = n));

	res = malloc(sizeof(res) * (len_s1 + n));

	if (res == NULL)
		return (NULL);

	for (count = 0; *(s1 + count) != '\0'; count++)
	{
		*(res + count) = *(s1 + count);
	}
	for (len_s2 = 0; len_s2 < n; len_s2++)
	{
		*(res + count) = *(s2 + len_s2);
		count++;
	}
	return (res);
}
