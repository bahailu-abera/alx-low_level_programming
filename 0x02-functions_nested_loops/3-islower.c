#include <main.h>

/**
 * _islower - Shows 1 if the input is a
 * lowercase character, Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 (lowercase) 0(upercase)
 */
int _islower(char c)
{
	if (c & 32)
		return (1);
	else
		return (0);
	_putchar(10);
}
