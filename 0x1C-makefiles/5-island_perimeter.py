#!/usr/bin/python3
"""
Calculates perimeter of island
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter += 4
                else:
                    perimeter += 2
                if i != 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
