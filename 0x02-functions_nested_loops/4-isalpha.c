#include "main.h"

/**
 * _isalpha - shows if c is a letter or not
 *
 * Return: 1 (c is a letter) 0 ( c is not aletter)
 *
 * @c: is an integer that reperesent the ascii value
 *  of the letter
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
