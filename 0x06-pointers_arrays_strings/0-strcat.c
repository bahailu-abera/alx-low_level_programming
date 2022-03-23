#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination of the string
 * @src: the source of the string
 * 
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
    int count;
    int src_index;

    count = 0;
    src_index = 0;

    while (*(dest + count) != '\0')
    {
        count++;
    }

    while (*(src + src_index) != '\0')
    {
        *(dest + count) = *(src + src_index);
        count++;
        src_index++;
    }

    return (dest);
}