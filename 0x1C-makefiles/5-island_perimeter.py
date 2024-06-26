#!/usr/bin/python3

"""
This is the island perimeter module
"""


def island_perimeter(grid):
    """
    This is the method for finding the perimeter of the island
    """
    per, rows, cols = 0, len(grid), len(grid[0])

    dirs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                for dr, dc in dirs:
                    nr, nc = r + dr, c + dc
                    if nr < 0 or nr >= rows or nc < 0 or nc >= cols or\
                            grid[nr][nc] == 0:
                        per += 1
    return (per)
