#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid

    Args:
        grid (list[list[int]]): rectangular grid of 0's and 1's representing water and land zones, respectively

    Returns:
        int: perimeter of the island
    """

    # Find the first land cell
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Count the perimeter starting from this cell
                return dfs(grid, i, j)

    # No land cell found
    return 0


def dfs(grid, i, j):
    """
    Performs depth-first search to count the perimeter of the island starting from cell (i, j)

    Args:
        grid (list[list[int]]): rectangular grid of 0's and 1's representing water and land zones, respectively
        i (int): row index of the current cell
        j (int): column index of the current cell

    Returns:
        int: perimeter of the island starting from cell (i, j)
    """

    # Base cases
    if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[i]):
        # Out of bounds
        return 1
    if grid[i][j] == 0:
        # Reached water cell
        return 1
    if grid[i][j] == -1:
        # Already visited land cell
        return 0

    # Mark cell as visited
    grid[i][j] = -1

    # Recursively count the perimeter from adjacent cells
    return (
        dfs(grid, i-1, j) +
        dfs(grid, i+1, j) +
        dfs(grid, i, j-1) +
        dfs(grid, i, j+1)
    )

