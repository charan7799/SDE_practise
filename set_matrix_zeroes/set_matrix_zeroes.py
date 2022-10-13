from typing import List

def setZeros(matrix: List[List[int]]) -> None:
	# Write your code here.
    col_0 = 1
    rows = len(matrix)
    cols = len(matrix[0])
    for i in range(rows):
        if matrix[i][0] == 0:
            col_0 = 0
        for j in range(1, cols):
             if matrix[i][j] == 0:
                    matrix[i][0]=0
                    matrix[0][j]=0
    for i in range(rows-1, -1, -1):
        for j in range(cols-1, 0, -1):
#             print(i, j)
            if matrix[i][0]==0 or matrix[0][j]==0:
                matrix[i][j] = 0
        if col_0 == 0:
            matrix[i][0] = 0