#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 *
 * @n: the number of parameters
 * @...: unkown parameters
 *
 * Return: sum of parameteres
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
