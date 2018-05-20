class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer denotes the middle number of the array
     */
    int median(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        if (len % 2) return nums[len / 2];
        else return nums[len / 2 - 1];
    }
};

// 总耗时 500 ms
// 您的提交打败了 82.20% 的提交!