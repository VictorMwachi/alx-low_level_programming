#!/usr/bin/python3
"""perimetr module"""

def island_perimeter(grid):

    """returns the perimeter of an island"""
    per=0
    for row in grid:
        for val in row:
            per+=val
    if per == 1:
        return 4
    else:
        return ((per -2)*2)+6)
