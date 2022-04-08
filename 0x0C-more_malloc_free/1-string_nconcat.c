#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates string
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the length of s2 character to be
 * concat
 *
 * Return: pointer to the result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len_s1, len_s2, len_res, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n > len_s2)
		n = len_s2;

	len_res = len_s1 + n;

	res = malloc(len_res + 1);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < len_res; i++)
	{
		if (i < len_s1)
			res[i] = s1[i];
		else
			res[i] = s2[i - len_s1];
	}
	res[i] = '\0';
	return (res);
}


