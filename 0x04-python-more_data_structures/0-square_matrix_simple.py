#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    recent_matrix = [row[:] for row in matrix]
    for idx, row in enumerate(recent_matrix):
        for idx2, col in enumerate(recent_matrix):
            recent_matrix[idx][idx2] = row[idx2] ** 2
    return recent_matrix
