#include "main.h"

/**
 * print_chessboard - prints the 2d chessboard table
 *
 * @a: the chessboard array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; i < 64; i++)
	{
		if ((i % 8 == 0) && (i != 0))
		{
			_putchar(10);
			j = 0;
		}
		_putchar(a[i / 8][j]);
		j++;
	}
	_putchar(10);
}

