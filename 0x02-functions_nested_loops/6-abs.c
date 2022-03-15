#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Return: The absolute value of the number
 *
 * @n: The integer whose absolute value is computed
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
	_putchar(10);
}
