#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integer
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be
 * compare values
 *
 * Return: int (index of the number in the array)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
