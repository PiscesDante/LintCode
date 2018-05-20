class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> &nums) {
        int value = nums[0];
        int count = 1;
        int len = nums.size();
        for (int i = 1; i < len; ++i) {
            if (nums[i] != value) count -= 1;
            else count += 1;
            if (count == 0) {
                value = nums[i];
                count += 1;
            }
        }
        return value;
    }
};

// 总耗时 631 ms
// 您的提交打败了 76.60% 的提交!