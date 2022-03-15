#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 *
 * Return: The last digit of an Integerer
 *
 * @n: The integer
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = n % 10;
	}
	else
	{
		last_digit = (-1 * n) % 10;
	}
	_putchar(last_digit + 48);
	return (last_digit);
	_putchar(10);
}
