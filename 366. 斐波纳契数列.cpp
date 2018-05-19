class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        if (n == 1) return 0;
        if (n == 2) return 1;
        int prev = 0;
        int curr = 1;
        for (int i = 3; i <= n; ++i) {
            int temp = curr;
            curr += prev;
            prev = temp;
        }
        return curr;
    }
};

// 总耗时 288 ms
// 您的提交打败了 37.20% 的提交!