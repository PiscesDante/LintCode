class Solution {
public:
    /**
     * @param n: An integer
     * @return: true if this is a happy number or false
     */

    bool isHappy(int n) {
        while (n != 4 && n != 1) {
            int temp = 0;
            while (n != 0) {
                int digit = n % 10;
                temp += digit * digit;
                n /= 10;
            }
            n = temp;
        }
        if (n == 4) return false;
        else return true;
    }
};

// 总耗时 458 ms
// 您的提交打败了 49.20% 的提交!