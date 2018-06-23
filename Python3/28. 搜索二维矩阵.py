#!/usr/bin/env python3

class Solution:
    """
    @param matrix: matrix, a list of lists of integers
    @param target: An integer
    @return: a boolean, indicate whether matrix contains target
    """
    def searchMatrix(self, matrix, target):
        if matrix == [] or matrix == None : return False
        row = len(matrix)
        column = len(matrix[0])
        row_index = 0
        column_index = column - 1
        while row_index < row and column_index >= 0 :
            if target > matrix[row_index][column_index] : row_index += 1
            elif target < matrix[row_index][column_index] : column_index -= 1
            else : return True
        return False

# 总耗时 1017 ms
# 您的提交打败了 97.44% 的提交!