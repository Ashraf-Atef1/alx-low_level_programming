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
                perimeter += count_cell_perimeter(grid, i, j)
    return perimeter


def count_cell_perimeter(grid, i, j):
    """Calculate the perimeter for each cell"""
    sum = 0
    if j and not grid[i][j - 1]:
        sum += 1
    if j and not grid[i][j + 1]:
        sum += 1
    if i and not grid[i - 1][j]:
        sum += 1
    if i and not grid[i + 1][j]:
        sum += 1
    return sum
