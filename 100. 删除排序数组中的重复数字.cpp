class Solution {
public:
    /*
     * @param nums: An ineger array
     * @return: An integer
     */
    int removeDuplicates(vector<int> &nums) {
        if (nums.empty()) return 0;
        int len = nums.size();
        int slow = 0;
        int fast = 0;
        while (fast < len) {
            if (nums[slow] == nums[fast]) ++fast;
            else nums[++slow] = nums[fast++];
        }
        return slow + 1;
    }
};

// 总耗时 824 ms
// 您的提交打败了 78.60% 的提交!