#include <stdio.h>

/**
 * print_array - prints array from @low index to @high index
 *
 * @array: the array to be printed
 * @low: the index for starting printing
 * @high: the last index for printing
 *
 * Return: void
 */
void print_array(int *array, int low, int high)
{
	printf("Searching in array: ");
	for (; low < high; low++)
		printf("%d, ", array[low]);
	printf("%d\n", array[low]);
}

/**
 * recursive_binary - the recursive version of binary search
 *
 * @array: the search space
 * @low: the lower bound for search space
 * @high: the upper bound for search space
 * @value: the value to be searched
 *
 * Return: the index where @value is located
 *         if value is not present or the array is null returns (-1)
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low >= high)
	{
		if (array[low] == value)
			return ((int)low);
		print_array(array, low, high);
		return (-1);
	}
	print_array(array, low, high);
	mid = (low + high) / 2;
	if (value == array[mid])
		return (recursive_binary(array, low, mid, value));
	else if (value < array[mid])
		return (recursive_binary(array, low, mid - 1, value));
	else
		return (recursive_binary(array, mid + 1, high, value));
}

/**
 * advanced_binary - searches for a value in a sorted array
 *
 * @array: the search space
 * @size: the size of @array
 * @value: the value to be searched
 *
 * Return: the index where @value is located
 *         if value is not present or the array is null returns (-1)
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursive_binary(array, 0, (int)size - 1, value));
}
