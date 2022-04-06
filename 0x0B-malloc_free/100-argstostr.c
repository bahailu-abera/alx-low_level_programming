#include <stdlib.h>
#include "main.h"


/**
 * argstostr - concatenates all arguments
 * @ac: the size of args
 * @av: arr of arguments
 *
 * Return: a pointer to a new string(success)
 *         NULL (failure)
 */

char *argstostr(int ac, char **av)
{
	int count = 0, i, j, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (count < ac)
	{
		for (i = 0; av[count][i] != '\0'; i++)
			;
		size += i;
		count++;
	}
	str = malloc((sizeof(char) * size) + ac);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	count = 0;
	while (count < size)
	{
		for (i = 0; av[j][i] != '\0'; i++)
		{
			*(str + count) = av[j][i];
			count++;
		}
		j++;
		*(str + count) = '\n';
		count++;
	}
}
