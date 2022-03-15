#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int count;

	while (i < 10)
	{
		for (count = 97; count <= 122; count++)
		{
			_putchar(count);
		}
		_putchar(10);
		i += 1;
	}
}
