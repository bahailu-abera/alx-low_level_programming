#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integeres between a given
 * number and 98
 *
 * Return: Void
 *
 * @n: The integer value
 */
void print_to_98(int n)
{
	int count;

	if (n >= 98)
	{
		for (count = n; count > 98; count--)
		{
			printf(count);
			putchar(',');
			putchar(" ");
		}
		printf(98);
	}
	else
	{
		for (count = n; count < 98; count++)
		{
			printf(count);
			putchar(',');
			putchar(" ");
		}
		printf(98);
	}
}
