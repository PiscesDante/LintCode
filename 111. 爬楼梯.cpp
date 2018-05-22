class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        int prev = 1;
        int curr = 2;
        for (int i = 3; i <= n; ++i) {
            int temp_old = curr;
            curr += prev;
            prev = temp_old;
        }
        return curr;
    }
};

// 总耗时 223 ms
// 您的提交打败了 76.40% 的提交!