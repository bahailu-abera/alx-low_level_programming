#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 *
 * Return: the first index where @value is located
 *         if @value if not present or if the array is NULL return (-1)
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos;

	if (array == NULL)
		return (-1);

	while ((value >= array[l]) && (value <= array[h]))
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) *
			   (value - array[l]));
		if (pos > 0 && array[pos - 1] == value)
		{
			printf("Value checked pos array[%ld] = [%d]\n", pos - 1,
			       array[pos - 1]);
			return (pos - 1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			h = pos - 1;
		else
			l = pos + 1;
	}

	return (-1);
}
