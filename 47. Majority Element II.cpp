class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: The majority number that occurs more than 1/3
     */
    int majorityNumber(vector<int> &nums) {
        int num1 = nums[0];
        int num2 = nums[1];
        int count1 = 0;
        int count2 = 0;
        for (int n : nums) {
            if (n == num1) {
                count1 += 1;
            } else if (n == num2) {
                count2 += 1;
            } else {
                count1 -= 1;
                count2 -= 1;
                if (count1 == 0) {
                    num1 = n;
                    count1 = 1;
                }
                if (count2 == 0) {
                    num2 = n;
                    count2 = 1;
                }
            }
        }
        count1 = 0;
        count2 = 0;
        for (int n : nums) {
            if (n == num1) ++count1;
            if (n == num2) ++count2;
        }
        if (count1 > count2) return num1;
        else return num2;
    }
};

// 总耗时 483 ms
// 您的提交打败了 87.40% 的提交!