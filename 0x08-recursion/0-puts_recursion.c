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
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar(10);
}

