#!/usr/bin/python3
"""
Calculates perimeter of island
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    first_row = None
    last_row = None
    first_col = None
    last_col = None

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if first_row is None:
                    first_row = i
                if first_col is None or first_col > j:
                    first_col = j
                if last_col is None or last_col < j:
                    last_col = j
                last_row = i
    if first_row is None:
        return (0)
    perimeter = 2 * (last_col - first_col + last_row - first_row + 2)

    return perimeter
