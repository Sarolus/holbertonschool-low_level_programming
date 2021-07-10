#!/usr/bin/python3
"""
    Island Perimeter Calculator
"""

def island_perimeter(grid):
    """
        Island Perimeter Calculation Function
    """

    perimeter = 0
    gridHeight = len(grid) - 1
    gridWidth = len(grid[row]) - 1

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] is 1:
                if row is 0 or grid[row - 1][column] is 0:
                   perimeter +=1
                if column is 0 or grid[row][column - 1] is 0:
                    perimeter +=1
                if row == gridHeight or grid[row + 1][column] is 0:
                    perimeter +=1
                if column == gridWidth or grid[row][column + 1] is 0:
                    perimeter +=1
    
    return perimeter
