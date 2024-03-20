#!/usr/bin/python3
"""
5-island_perimeter.py
"""


def island_perimeter(grid):
    """Calculate the island perimeter"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i and grid[i - 1][j] == 0:
                    perimeter += 2
                if j and grid[i][j - 1] == 0:
                    perimeter += 2
    return perimeter
