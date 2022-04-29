#include "main.h"


/**
 * power- computes the power of two integer
 * @a: the base of the power
 * @b: the exponent of the powe
 *
 * Return: the power of (a, b)
 */

unsigned int power(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * power(a, b - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of zero and one
 *
 * Return: converted number (success) 
 * 	  0(failure)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0, i;


	for (; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	i = --len;
	for (; i >= 0; i--)
	{
		if (b[i] == '0')
			continue;
		else
			num += power(2, (len - i));
	}

	return (num);
}
