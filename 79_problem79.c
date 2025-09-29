/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/


def diagonal_traversal_manual(matrix):
    rows, cols = len(matrix), len(matrix[0])
    result = []

    # Start from first column
    for r in range(rows):
        i, j = r, 0
        while i >= 0 and j < cols:
            result.append(matrix[i][j])
            i -= 1
            j += 1

    # Start from top row (excluding first element)
    for c in range(1, cols):
        i, j = rows - 1, c
        while i >= 0 and j < cols:
            result.append(matrix[i][j])
            i -= 1
            j += 1

    return result

# Sample Input
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(diagonal_traversal_manual(matrix))