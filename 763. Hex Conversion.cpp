class Solution {
public:
    /**
     * @param n: a decimal number
     * @param k: a Integer represent base-k
     * @return: a base-k number
     */
    string hexConversion(int n, int k) {
        if (n == 0) return string("0");
        while (n != 0) {
            cache.push(digits[n % k]);
            n /= k;
        }
        while (!cache.empty()) {
            ret += cache.top();
            cache.pop();
        }
        return ret;
    }

private:
    string ret;
    stack<char> cache;
    string digits = "0123456789ABCDEF";

};

// 总耗时 55 ms
// 您的提交打败了 96.13% 的提交!