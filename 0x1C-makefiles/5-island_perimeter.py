#!/usr/bin/python3
"""island perimeter """


def island_perimeter(grid):
    """
    Args:
        grid: A list of list of integers
    Returns:
        The perimeter of the island
    """
    w= len(grid[0])
    h= len(grid)
    edges = 0
    perimeter = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                perimeter += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (n > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
