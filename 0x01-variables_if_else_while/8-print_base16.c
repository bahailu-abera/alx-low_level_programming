#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char letter;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar(10);

	return (0);
}
