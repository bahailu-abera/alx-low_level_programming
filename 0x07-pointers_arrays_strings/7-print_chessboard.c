#include "main.h"

/**
 * print_chessboard - printd the chessboard
 *
 * @a: the 2D array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8]);
{
	unsigned int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = 1;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
