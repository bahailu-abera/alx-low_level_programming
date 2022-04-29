#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor, bit_pos = 0;

	xor = (n ^ m);

	while (bit_pos < (sizeof(xor) * 8))
	{
		if ((xor >> bit_pos) & 1)
			bits += 1;
		bit_pos++;
	}

	return (bits);
}
