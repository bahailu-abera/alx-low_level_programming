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
			printf("%d", count);
			putchar(',');
			putchar(' ');
		}
		printf("%d", 98);
		putchar('\n');
	}
	else
	{
		for (count = n; count < 98; count++)
		{
			printf("%d", count);
			putchar(',');
			putchar(' ');
		}
		printf("%d", 98);
		putchar('\n');
	}
}
