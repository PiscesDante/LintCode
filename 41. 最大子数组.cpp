class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> &nums) {
        int sum = 0;
        int max = nums[0];
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            sum += nums[i];
            if (sum > max) max = sum;
            if (sum < 0) sum = 0;
        }
        return max;
    }
};

// 总耗时 124 ms
// 您的提交打败了 92.20% 的提交!