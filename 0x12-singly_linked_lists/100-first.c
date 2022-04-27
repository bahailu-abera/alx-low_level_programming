#include <stdio.h>


void print(void) __attribute__ ((constructor));

/**
 * print- prints a string before a main function.
 *
 * Return: void
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
