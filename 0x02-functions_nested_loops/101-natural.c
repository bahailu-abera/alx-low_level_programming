#include <stdio.h>

/**
 * main - prints natural numbers below 1024
 * that are multiplies of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int sum = 0;

	for (a = 3; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
