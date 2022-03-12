#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56)
				continue;

			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
