#include "function_pointers.h"

/**
 * print_name - prints the a string
 * by calling another function
 *
 * @name: the string to be printed
 * @f: the callback function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
