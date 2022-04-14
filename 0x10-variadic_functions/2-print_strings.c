#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints all strings
 *
 * @separator: a string to be printed betwen the strings
 * @n: The number of the strings passed to the functions
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, const char *));
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
}
