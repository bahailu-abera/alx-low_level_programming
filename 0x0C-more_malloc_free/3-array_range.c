#include "main.h"
#include <stdlib.h>


/**
 * array_range - creates an array
 * of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;

	return (arr);
}
