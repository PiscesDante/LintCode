class Solution {
public:
    /**
     * @param A: An array of Integer
     * @return: an integer
     */
    int longestIncreasingContinuousSubsequence(vector<int> &A) {
        if (A.empty()) return 0;
        bool up = true;
        int curr_length = 1;
        int max_length = 1;
        int len = A.size();
        int prev_value = A[0];
        for (int i = 1; i < len; ++i) {
            if (prev_value > A[i] && !up) {
                curr_length += 1;
            } else if (prev_value < A[i] && up) {
                curr_length += 1;
            } else if (prev_value < A[i] && !up) {
                up = true;
                if (curr_length > max_length) max_length = curr_length;
                curr_length = 2;
            } else if (prev_value > A[i] && up) {
                up = false;
                if (curr_length > max_length) max_length = curr_length;
                curr_length = 2;
            }
            prev_value = A[i];
        }
        if (curr_length > max_length) max_length = curr_length;
        return max_length;
    }
};

// 总耗时 180 ms
// 您的提交打败了 96.80% 的提交!