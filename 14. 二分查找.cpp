class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &nums, int target) {
        int head = 0;
        int tail = nums.size() - 1;
        while (head <= tail) {
            int mid = head + (tail - head) / 2;
            if (target < nums[mid]) tail = mid - 1;
            else if (target > nums[mid]) head = mid + 1;
            else {
                while (nums[mid - 1] == nums[mid]) mid -= 1;
                return mid;
            }
        }
        return -1;
    }
};

// 总耗时 206 ms
// 您的提交打败了 70.00% 的提交!