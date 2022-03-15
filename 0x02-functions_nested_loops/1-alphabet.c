#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
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
