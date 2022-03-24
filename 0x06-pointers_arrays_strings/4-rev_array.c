#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: the array
 * @n: number of array
 * 
 * Return: void
 */

void reverse_array(int *a, int n)
{
    int i;
    int temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - (i + 1)];
        a[n - (i + 1)] = temp;
    }
}