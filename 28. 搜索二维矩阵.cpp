class Solution {
public:
    /**
     * @param matrix: matrix, a list of lists of integers
     * @param target: An integer
     * @return: a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        if (matrix.empty()) return false;
        int row_end = matrix.size();
        int column_end = matrix[0].size();
        int row_index = 0;
        int column_index = column_end - 1;
        while (row_index < row_end && column_index >= 0) {
            if (target < matrix[row_index][column_index]) column_index -= 1;
            else if (target > matrix[row_index][column_index]) row_index += 1;
            else return true;
        }
        return false;
    }
};

// 总耗时 218 ms
// 您的提交打败了 78.80% 的提交!