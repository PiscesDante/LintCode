// [62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80],
// [63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81],
// [64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82],
// [65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83],
// [66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84],
// [67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85]

class Solution {
public:
    /**
     * @param matrix: A list of lists of integers
     * @param target: An integer you want to search in matrix
     * @return: An integer indicate the total occurrence of target in the given matrix
     */
    int searchMatrix(vector<vector<int>> &matrix, int target) {
        if (matrix.empty()) return 0;
        int ret = 0;
        int row = matrix.size();
        int column = matrix[0].size();

        int row_pos = 0;
        int column_pos = column - 1;

        while (row_pos < row && column_pos >= 0) {
            if (target < matrix[row_pos][column_pos]) {
                --column_pos;
            } else if (target > matrix[row_pos][column_pos]) {
                ++row_pos;
            } else {
                ret += 1;
                --column_pos;
            }
        }
        return ret;
    }
};

// 总耗时 149 ms
// 您的提交打败了 96.20% 的提交!