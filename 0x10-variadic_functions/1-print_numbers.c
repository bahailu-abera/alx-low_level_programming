#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed
 * by new line
 *
 * @separator: the sttring to be printed between numbers
 * @n: number of integers passed to the functions
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator)
		{
			for (j = 0; separator[j] != '\0'; j++)
				printf("%c", separator[j]);
		}
	}
	printf("\n");

	va_end(nums);
}

