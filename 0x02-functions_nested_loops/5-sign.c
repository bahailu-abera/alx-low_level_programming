#include "main.h"

/**
 * print_sign - print the sign of the number and tell
 * if it is positive or negative
 * or if it is zero
 *
 * Return: 1 (n is greater than 0)
 *         -1 (n is less than 0)
 *         0 (n is equal to 0)
 *
 * @n: The integer to be tested
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar(10);
}
