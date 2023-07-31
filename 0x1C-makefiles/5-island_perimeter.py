#!/usr/bin/python3
"""This module contains the island_perimeter function definition.
"""

def return_perimeter_val(grid, row, col):
    """This Function returns the perimeter round each unit square
    Found in the grid.
    """
    sq_perimeter = 4
    if not (col - 1 < 0 or grid[row][col - 1] == 0):
        sq_perimeter -= 1
    if not (col + 1 == len(grid[0]) or grid[row][col + 1] == 0):
        sq_perimeter -= 1
    if not (row - 1 < 0 or grid[row - 1][col] == 0):
        sq_perimeter -= 1
    if not (row + 1 == len(grid) or grid[row + 1][col] == 0):
        sq_perimeter -= 1
    return sq_perimeter

def island_perimeter(grid):
    """This function return the perimeter of the island described in
    the grid.
    """
    total_perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                total_perimeter += return_perimeter_val(grid, row, col)
    return total_perimeter
