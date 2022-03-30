#include "main.h"
#include "2-strlen_recursion.c"


/**
 * comparator - compares the two end of an array
 *
 * @s: the string
 * @first: first index
 * @last: last index
 *
 * Return: 1(palindrome) otherwise 0
 */
int comparator(char *s, int first, int last)
{
	if (first == last)
		return (1);
	if (last < first)
		return (1);
	if (*(s + first) != *(s + last))
		return (0);
	return (comparator(s, first + 1, last - 1));
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: The string
 *
 * Return: 1 (palindrome) or 0(not palindrome)
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
