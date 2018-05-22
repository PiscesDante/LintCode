class Solution {
public:
    /**
     * @param n: the integer to be reversed
     * @return: the reversed integer
     */
    queue<int> cache;

    int reverseInteger(int n) {
        if (n < 9 && n > -9) return n;
        bool is_negative = false;
        if (n < 0) {
            is_negative = true;
            n *= -1;
        }
        while (n != 0) {
            cache.push(n % 10);
            n /= 10;
        }
        long long ret = 0;
        while (!cache.empty()) {
            ret *= 10;
            ret += cache.front();
            cache.pop();
            if (ret > INT_MAX || ret < INT_MIN) return 0;
        }
        if (is_negative) ret *= -1;
        return ret;
    }
};

// 总耗时 261 ms
// 您的提交打败了 95.00% 的提交!