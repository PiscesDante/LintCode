class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: nothing
     */
    void recoverRotatedSortedArray(vector<int> &nums) {
        auto pivot = nums.begin();
        while (pivot != nums.end() - 1) {
            if (*pivot > *(pivot + 1)) break;
            pivot += 1;
        }
        reverse(nums.begin(), pivot + 1);
        reverse(pivot + 1, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

// 总耗时 248 ms
// 您的提交打败了 81.00% 的提交!