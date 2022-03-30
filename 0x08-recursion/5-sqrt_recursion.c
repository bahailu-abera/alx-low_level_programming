#include "main.h"

/**
 * power - returns the natural root
 * of a number.
 * @n: The number.
 * @r: the root
 *
 * Return: the square root or -1
 */

int power(int n, int r)
{
	if (r % (n / r) == 0)
	{
		if (r * (n / r) == n)
		{
			return (r);
		}
		else
			return (-1);
	}
	return (0 + power(n, r + 1));
}
/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: The number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (power(n, 2));
}
