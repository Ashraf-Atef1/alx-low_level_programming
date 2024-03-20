#!/usr/bin/python3
"""
5-island_perimeter.py
"""


def island_perimeter(grid):
    """Calculate the island perimeter"""
    perimeter = 0
    col = len(grid)
    row = len(grid[0])
    for i in range(col):
        for j in range(row):
            if grid[i][j] == 1:
                perimeter += 4
                if i and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
