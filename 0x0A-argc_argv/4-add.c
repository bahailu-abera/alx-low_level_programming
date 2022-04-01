#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two numbers
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc <= 1)
		printf("%d\n", 0);
	for (i = 1; i < argc; i++)
	{
		if (argv[i] >= 48 && argv[i] <= 57)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			break;
		}
	}
	if (i == argc)
		printf("%d\n", sum);
	return (0);
}
