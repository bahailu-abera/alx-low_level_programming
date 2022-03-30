#include "main.h"

/**
 * is_prime - checks if a number is
 * prime or not
 * @n: the number
 * @c: counter
 *
 * Return: 0(not prime) 1(prime)
 */
int is_prime(int n, int c)
{
	if (n == c)
		return (1);
	if (n % c == 0)
		return (0);
	if (c < n)
		return (is_prime(n, c + 1));
	return (1);
}

/**
 * is_prime_number - determine if an integer is
 * prime or not
 *
 * @n: the integer
 *
 * Return: 1(prime) or 0(not prime)
 */

int is_prime_number(int n);
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

