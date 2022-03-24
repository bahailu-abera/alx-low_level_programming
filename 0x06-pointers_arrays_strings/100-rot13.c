#include "main.c"

/**
 * rot13 - encode a string using rot13
 * @s: string
 *
 * Return: char
 */

char *rot13(char *s)
{
	int index = 0;
	int i;

	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + index) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + index) == letter[i])
			{
				*(s + index) = rot13[i];
				break;
			}
		}
		index++;
	}
	return (s);
}
