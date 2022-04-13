#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - reads arguments for the console
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:Always  0
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (operator != '+' && operator != '-' && operator != '*'
			&& operator != '/' && operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0) && ((operator == '/') || (operator == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	int (*func)(int, int) = get_op_function(operator);

	result = func(a, b);

	printf("%d\n", result);
	return (0);
}
