#include "main.h"

/**
 * _strstr - locate the first substring
 *
 * @haystack: the longest string
 * @needle: the substring
 *
 * Return: the location of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j, temp;

	while (*(haystack + i) != '\0')
	{
		temp = i;

		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == *(needle + j) && *(haystack + i) != '\0')
			{
				i++;
			}
			else
				break;
		}
		if (*(needle + j) == '\0')
			return (haystack + temp);
		i = temp + 1;
	}
	return ('\0');
}
