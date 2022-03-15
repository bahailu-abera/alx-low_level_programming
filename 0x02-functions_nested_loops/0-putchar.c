#include "main.h"


/**
 * main - print the string _putchar as a message
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count;
	int size;

	size = sizeof(str) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar(10);
	return (0);
}
