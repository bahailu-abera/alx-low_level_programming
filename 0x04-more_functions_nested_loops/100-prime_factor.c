#include <stdio.h>
#include <stdbool.h>

/**
 * main - print the largest factor of the
 * number 612852475143
 *
 * Return: void
 */

int main(void)
{
	int long  n = 612852475143;
	int long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
