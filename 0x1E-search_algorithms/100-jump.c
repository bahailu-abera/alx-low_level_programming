#include <stdio.h>
#include <math.h>

/**
 * jump_search -  searches for a value in a sorted array of integers
 *
 * @array: the array to be searched
 * @size: the size of @array
 * @value: the target element
 *
 * Return: the index of @value in the array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t root = sqrt(size), low = 0, high = 0;

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high += root;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (array[low] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		low += 1;
		if (low == size)
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	if (array[low] == value)
		return (low);

	return (-1);
}
