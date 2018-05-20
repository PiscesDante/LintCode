class Solution {
public:
    /**
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> &A) {
        int len = A.size();
        for (int i = 0; i < len - 1; ++i) A[i + 1] ^= A[i];
        return A[len - 1];
    }
};

// 总耗时 42 ms
// 您的提交打败了 99.00% 的提交!