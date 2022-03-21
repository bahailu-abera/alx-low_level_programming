#include "main.h"

/**
 * puts2 - prints the second element of an array starting
 * frm the first element
 *
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int count;

	count = 0;

	while (*(str + count))
	{
		_putchar(*(str + count));
		count += 2;
	}
	_putchar(10);
}
