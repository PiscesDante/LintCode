class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        long ret = 0;
        while (n) {
            n /= 5;
            ret += n;
        }
        return ret;
    }
};

// 总耗时 26 ms
// 您的提交打败了 89.80% 的提交!