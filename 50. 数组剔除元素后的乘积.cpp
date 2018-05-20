class Solution {
public:
    /*
     * @param nums: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        vector<long long> ret;
        int len = nums.size();
        ret.reserve(len);
        for (int i = 0; i < len; ++i) {
            long long prod = 1;
            for (int j = 0; j < len; ++j) {
                if (j == i) continue;
                prod *= nums[j];
            }
            ret.push_back(prod);
        }
        return ret;
    }
};

// 总耗时 193 ms
// 您的提交打败了 90.80% 的提交!