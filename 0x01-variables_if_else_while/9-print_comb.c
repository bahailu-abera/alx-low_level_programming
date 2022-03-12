#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		for (int j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar('\n');
		}
	}
	return (0);
}
