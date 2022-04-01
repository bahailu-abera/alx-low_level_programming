#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: the size of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
