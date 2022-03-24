#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int index = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + index) >= 97 && *(s + index) <= 122)
		*(s + index) = *(s + index) - 32;
	index++;
	while (*(s + index) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + index) == sep_words[i])
			{
				if ((*(s + (index + 1)) >= 97) && (*(s + (index + 1)) <= 122))
					*(s + (index + 1)) = *(s + (index + 1)) - 32;
				break;
			}
		}
		index++;
	}
	return (s);
}
