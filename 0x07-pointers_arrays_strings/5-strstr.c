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
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; )
	{
		if (*(haystack + i) == *(needle + j))
		{
			for (j = 0; *(needle + j) != '\0';)
			{
				if (*(haystack + i) == *(needle + j))
				{
					i++;
					j++;
				}
				break;
			}
			if (*(needle + j) == '\0')
				return (haystack + i);
		}
		i++;
	}
	return ('\0');
}


