#include <stdio.h>
#ifndef MIN
#define MIN(a, b) ((a < b) ? (a) : (b))
#endif


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
 * binary_search - searches for a value in a sorted array
 *
 * @array: a pointer to the first element of the array to search in
 * @low: the lower bound for the search space
 * @high: the upper bound for the searchh space
 * @value: the value to search for
 *
 * Return: the first index where @value is located otherwise (-1)
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	printf("Value found between indexes [%d] and [%d]\n", (int)low, (int)high);
	while (high >= low)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 *
 * Return: the first index where @value is located
 *         (-1) if @array is NULL or @value is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)bound, array[bound]);
		bound *= 2;
	}
	return (binary_search(array, bound / 2, MIN(bound, size - 1), value));
}
