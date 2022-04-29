#include "main.h"

/**
 * get_endianness -  checks the endianness.
 *
 * Return: 0 (big endian) 1 (little endian)
 */

int get_endianness(void)
{
	int num = 9;

	if (num + '0' == '9')
		return (1);
	else
		return (0);
}
