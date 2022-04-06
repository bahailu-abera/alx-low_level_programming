#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str:the string
 * Return: a pointer to a string
 */
char **strtow(char *str)
{
	int i, j, k = 0, count, ar = 0;
	char *word;
	char *arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			j++;
			if (str[i + 1] == 32 || str[i + 1] == '\0')
			{
				j++;
				k++;
				j = 0;
			}
		}
	}
	arr = (char **)malloc(sizeof(char *) * (k + 1));
	if (arr == NULL)
		return (NULL);
	for (i = j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			if (j == 0)
				count = i;
			j++;
			if (str[i + 1] == 32 || str[i + 1] == '\0')
			{
				j++;
				word = malloc(sizeof(char) * j);
				if (word == NULL)
				{
					for (; ar >= 0; ar--)
					{
						free(arr[ar]);
					}
					free(arr);
					return (NULL);
				}
				for (k = 0; k < j; k++)
				{
					word[k] = *(str + count);
					count++;
				}
				word[k] = '\0';
				arr[ar] = word;
				ar++;
				j = 0;
				k = 0;
			}
		}
	}
	arr[ar] = NULL;
	return (arr);
}
