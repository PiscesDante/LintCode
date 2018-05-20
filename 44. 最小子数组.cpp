class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: A integer indicate the sum of minimum subarray
     */
    int minSubArray(vector<int> &nums) {
        if (nums.empty()) return 0;
        int sum = 0;
        int min = nums[0];
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            if (sum > 0) sum = 0;
            sum += nums[i];
            if (sum < min) min = sum;
        }
        return min;
    }
};

// 总耗时 791 ms
// 您的提交打败了 62.40% 的提交!