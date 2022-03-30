#include "main.h"
#include "2-strlen_recursion.c"

/**
 * compar - compare two strings
 * @s1: the first string
 * @s2: the second string
 * @last_s1: last index of s1
 * @last_s2: last index of s2
 *
 * Return: 1 (identical) otherwise 0
 */
int compar(char *s1, char *s2, int last_s1, int last_s2)
{
	if (*(s2 + last_s2) == '*')
		if (last_s2 - 1 == 0 || *(s2 + last_s2 - 1) != '.')
			return (1);
		if (last_s2 - 2 == 0 || *(s2 + last_s2 - 2) == '*')
			return (1);
	if (last_s2 == 0 && last_s1 != 0)
		return (0);
	if (last_s2 == 0 && last_s1 == 0)
		return (1);
	if (*(s1 + last_s1) != *(s2 + last_s2))
		return (0);
	return (compar(s1, s2, last_s1 - 1, last_s2 - 1));
}

/**
 * wildcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1(identical) otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (compar(s1, s2, _strlen_recursion(s1) - 1, _strlen_recursion(s2) - 1));
}
