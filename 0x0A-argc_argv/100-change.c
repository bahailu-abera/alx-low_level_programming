#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: The number od args
 * @argv: The array of args
 *
 * Return: 0(success) 1 (failure)
 */

int main(int argc, char **argv)
{
	int min_coin = 0, cents, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			min_coin += cents / coins[i];
			cents %= coins[i];
		}
		printf("%d\n", min_coin);
	}
	else
		printf("%d\n", 0);
	return (0);
}

