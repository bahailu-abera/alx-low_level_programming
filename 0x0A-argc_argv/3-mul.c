#include <stdio.h>

/**
 * main - multiplies two number
 * @argc: number of arg
 * @argv: arrayod arg
 *
 * Return: 0(succes)
 * otherwise 1
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
