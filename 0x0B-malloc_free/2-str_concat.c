#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the string s2 followed
 * by the string s1
 */

char *str_concat(char *s1, char *s2)
{
    unsigned int i;
    unsigned int j;
    char *dest;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    for (i = 0; s1[i] != '\0'; i++)
            ;
    for (j = 0; s2[j] != '\0'; j++)
            ;
    dest = malloc(sizeof(char) * (i +j +1));
    if (dest == NULL)
            return (NULL);
    for (i = 0; s1[i] != '\0'; i++)
            *(dest + i) = *(s1 + i);
    for (j = 0; s2[j] != '\0'; j++)
    {
            *(dest + i) = *(s2 + j);
            i++;
    }
    return (dest);
}