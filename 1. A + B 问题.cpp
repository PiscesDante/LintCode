class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        int sum = a ^ b;
        int carry = (a & b) << 1;
        while (carry) {
            a = sum;
            b = carry;
            sum = a ^ b;
            carry = (a & b) << 1;
        }
        return sum;
    }
};

// 总耗时 76 ms
// 您的提交打败了 54.20% 的提交!