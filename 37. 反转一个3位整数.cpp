class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        int a, b, c;
        a = number % 10;
        number /= 10;
        b = number % 10;
        number /= 10;
        c = number;
        return a * 100 + b * 10 + c;
    }
};

// 总耗时 77 ms
// 您的提交打败了 46.60% 的提交!