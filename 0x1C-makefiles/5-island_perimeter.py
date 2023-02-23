#!/usr/bin/python3

"""
Calculate perimeter of an island
"""


def func_left(left_jirani, grid):
    """
    Left neighbor value
    """
    try:
        if left_jirani[1] < 0:
            return 0
        else:
            return grid[left_jirani[0]][left_jirani[1]]
    except IndexError:
        return 0


def func_right(right_jirani, grid, len_y):
    """
    Right neighbor value
    """
    try:
        if right_jirani[1] > len_y:
            return 0
        else:
            return grid[right_jirani[0]][right_jirani[1]]
    except IndexError:
        return 0


def func_down(down_jirani, grid, len_x):
    """
    Down neighbor value
    """
    try:
        if down_jirani[0] > len_x:
            return 0
        else:
            return grid[down_jirani[0]][down_jirani[1]]
    except IndexError:
        return 0


def func_up(up_jirani, grid):
    """
    Up neighbor value
    """
    try:
        if up_jirani[0] < 0:
            return 0
        else:
            return grid[up_jirani[0]][up_jirani[1]]
    except IndexError:
        return 0


def func_a(idx, idx2, grid, len_x, len_y):
    """
    Get the total number of neighbors
    """
    total = 0
    jirani_values = []
    xcoord, ycoord = idx, idx2
    left_jirani = xcoord, ycoord - 1
    right_jirani = xcoord, ycoord + 1
    up_jirani = xcoord - 1, ycoord
    down_jirani = xcoord + 1, ycoord
    jirani_values.append(func_left(left_jirani, grid))
    jirani_values.append(func_right(right_jirani, grid, len_y))
    jirani_values.append(func_down(up_jirani, grid, len_x))
    jirani_values.append(func_up(down_jirani, grid))
    for idx, c in enumerate(jirani_values):
        if c == 1:
            continue
        else:
            total += 1
    return total


def island_perimeter(grid):
    """
    Get the perimeter of an island
    """
    peri = 0
    for idx, i in enumerate(grid):
        for idx2, j in enumerate(i):
            if j == 1:
                peri += func_a(idx, idx2, grid, len(grid) - 1, len(i) - 1)
    return peri
