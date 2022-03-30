#include "main.h"

/**
 * _puts_recursion - prints a string followed by
 * a new line
 *
 * @s: the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *s2;
	unsigned int i = 0;

	if (*s == '\0')
		_putchar(10);
	else
		_putchar(s[0]);
	while (*(s + i) != '\0')
	{
		*(s2 + i) = *(s + i + 1);
		i++;
	}
	*(s2 + i) = '\0';
	return (_puts_recursion(s2));
}

