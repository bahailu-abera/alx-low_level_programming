#include "3-calc.h"

/**
 * op_add - addd two integer
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - substract two integer
 * @a: number 1
 * @b: number 2
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiplies two number
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divide two numbers
 *
 * @a: numenator
 * @b: denominator
 *
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - compute remainder of
 * the division of a by b
 *
 * @a: numenator
 * @b: denominator
 *
 * Return: modd of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
