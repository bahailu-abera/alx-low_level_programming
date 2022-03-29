#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of
 * the square matrix diagonal
 *
 * @a: the matrix
 * @size: the size  of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum = 0;
	unsigned int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += a[i][j];
			}
		}
	}
	printf("%d\n", sum);
}
