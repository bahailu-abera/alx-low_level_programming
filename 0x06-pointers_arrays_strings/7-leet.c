#include "main.h"

/**
 * leet - encode strings
 * @s: string
 * Return: char
 */

char *leet(char *s)
{
	int values[] = {65, 69, 76, 79, 84, 97, 101, 108, 111, 116};
	int encode[] = {52, 51, 49, 48, 55,  52, 51, 49, 48, 55};
	int index = 0;
	int i;

	while (*(s + index) != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*(s + index) == values[i])
			{
				*(s + index) = encode[i];
				break;
			}
		}
		index++;
	}
	return (s);
}
