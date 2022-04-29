#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: pointer to the integer
 * @index: the index of the bit
 *
 * Return: 1 (success) -1 (failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	(*n | (1 << index));

	return (1);
}
