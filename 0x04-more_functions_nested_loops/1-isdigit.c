#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: the ASCII value of in number format
 *
 * Return: 1(c is digit) or 0(otherwise)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
