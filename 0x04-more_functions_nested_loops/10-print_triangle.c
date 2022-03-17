#include "main.h"

/**
 * print_triangle - prints a triangle
 * followed by a new line
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void  print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < i)
				_putchar(32);
			else
				_putchar(35);
		}
		if (i != size - 1)
			_putchar(10);
	}
	_putchar(10);
}
