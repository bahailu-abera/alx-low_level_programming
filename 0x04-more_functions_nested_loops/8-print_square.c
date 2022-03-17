#include "main.h"

/**
 * print_square - prints a square with n by n #
 *
 * @n: the size of the square
 * Return
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	_putchar(10);
}
