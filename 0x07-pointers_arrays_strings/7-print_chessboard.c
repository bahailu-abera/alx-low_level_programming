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
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
	_putchar(10);
}
