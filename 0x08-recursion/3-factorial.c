#include "main.h"

/**
 * factorial - returns the factorial
 * of a given integer
 * @n: the integer
 * Return: fact
 */

int factorial(int n);
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
