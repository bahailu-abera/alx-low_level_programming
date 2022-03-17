#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from
 * 0 to 14 followed by newline
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (i = 48; i <= 52; i++)
		{
			_putchar(49);
			_putchar(i);
		}
		_putchar(10);
		j++;
	}
}
