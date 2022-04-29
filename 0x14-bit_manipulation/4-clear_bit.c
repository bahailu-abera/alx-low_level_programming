#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: the integer
 * @index: the position of the bit
 *
 * Return: 1 (success) -1 (failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int  temp = *n;

	if (index > (sizeof(temp) * 8))
		return (-1);

	temp = (~temp) | (1 << index);
	temp = ~temp;
	*n = temp;

	return (1);
}
