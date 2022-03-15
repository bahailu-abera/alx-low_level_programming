#include "main.h"

/**
 * print the alphabets as a message
 *
 * Return: Void as Success
 */
void print_alphabet(void)
{
	int count;
	for (count = 97; count <= 122; count++)
	{
		_putchar(count);
	}
	_putchar(10);
}
