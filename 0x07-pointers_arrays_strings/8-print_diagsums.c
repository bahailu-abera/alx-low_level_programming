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
	int rght_diagsum = 0;
	int lft_diagsum = 0;
	unsigned int index = size * size;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if ((i == 0) || (i % (size + 1) == 0))
			rght_diagsum += a[i];
		if ((i % (size - 1 ) == 0) && (i != index - 1))
			lft_diagsum += a[i];
	}
	printf("%d, %d\n", rght_diagsum, lft_diagsum);
}
