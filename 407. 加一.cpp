class Solution {
public:
    /**
     * @param digits: a number represented as an array of digits
     * @return: the result
     */
    vector<int> plusOne(vector<int> &digits) {
        int len = digits.size();
        int curr = len - 1;
        int carry = 1;
        while (curr >= 0 && carry) {
            digits[curr] += carry;
            if (digits[curr] > 9) carry = 1;
            else carry = 0;
            digits[curr] %= 10;
            curr -= 1;
        }
        if (carry) digits.insert(digits.begin(), carry);
        return digits;
    }
};

// 总耗时 213 ms
// 您的提交打败了 95.60% 的提交!