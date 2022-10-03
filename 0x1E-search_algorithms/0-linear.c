/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: the search space array
 * @size: the size of @array
 * @value: the target element
 *
 * Return: the first index where @value is located
 *         if the value is not present or @array is NULL return (-1)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
