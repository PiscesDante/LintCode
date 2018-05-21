class Solution {
public:
    /**
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        if (n == 0) return false;
        if (n >= INT_MAX || n <= INT_MIN) return false;
        return (static_cast<int>(n & (n - 1)) == 0);
    }
};

// 总耗时 681 ms
// 您的提交打败了 82.00% 的提交!