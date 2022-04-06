#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates two dimensional
 * array memory of type int
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: 2D pointer (success)
 *         otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)(malloc(sizeof(int) * width));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
