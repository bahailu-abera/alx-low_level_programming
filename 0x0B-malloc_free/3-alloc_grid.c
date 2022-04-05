#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int i, j;
    int **arr = (int **)malloc(sizeof(int *) * height);
    for (i = 0; i < height; i++)
    {
        arr[i] = (int *)(malloc(sizeof(int) * width));
    }
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
           arr[i][j] = 0;
        }
    }
    return (arr);
    
}