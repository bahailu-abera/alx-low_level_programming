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
	int count = 0, i, size = 0, j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (count < ac)
	{
		if (av[count] == NULL)
			return (NULL);
		for (i = 0; av[count][i] != '\0'; i++)
			size++;
		size++;
		count++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = count = j = 0; count < size; count++, j++)
	{
		if (av[i][j] == '\0')
		{
			str[count] = '\n';
			count++;
			i++;
			j = 0;
		}
		if (count < size - 1)
		{
			str[count] = av[i][j];
		}
	}
	str[count] = '\0';
	return (str);
}
