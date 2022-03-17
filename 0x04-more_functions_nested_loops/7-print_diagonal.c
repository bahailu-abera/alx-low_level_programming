#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of repetition
 *
 * Return: void
 */

void print_diagonal(int n);
{
	int i;
	int j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
			}
		}
		_putchar(10);
	}
}
