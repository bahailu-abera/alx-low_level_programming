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
		putchar(10);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
		putchar('\n');
	}

	return (0);
}

