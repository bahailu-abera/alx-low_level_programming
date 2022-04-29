#include "main.h"


/**
 * print_binary - prints the binary
 * representation of unsigned integer
 *
 * @n: the integer representation in decimal
 *
 * Return: void
 */

void print_binary(unsigned long  int n)
{
	int bit_pos = 0;
	unsigned long int temp = n;

	while ((temp > 1) && (++bit_pos))
		temp >>= 1;

	while (bit_pos >= 0)
		((n >> bit_pos) & 1) ? _putchar('1') : _putchar('0'), --bit_pos;
}
