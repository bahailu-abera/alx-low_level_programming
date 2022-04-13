#include "3-calc.h"

/**
 * get_op_func - select the correct function
 * to perform the operation asked by the user
 *
 * @s: the operator
 *
 * Return: the correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i])
	{
		if (ops[i][0] == s)
			return (int (*(ops[i][1]))(int, int));
		i++;
	}

	return (NULL);

}
