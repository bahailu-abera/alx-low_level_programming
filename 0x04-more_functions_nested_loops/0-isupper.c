#include "main.h"

/**
 * _isupper - returns 1 if the character is uppercase
 *                 else 0 if the character is lowercase
 * @c: character
 * Return: 1(uppercase) or 0(lowercase)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
