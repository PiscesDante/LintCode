class Solution {
public:
    /**
     * @param num: a positive number
     * @return: true if it's a palindrome or false
     */
    bool isPalindrome(int num) {
        string string_num = to_string(num);
        string rever_num(string_num);
        reverse(rever_num.begin(), rever_num.end());
        return string_num == rever_num;
    }
};

// 总耗时 268 ms
// 您的提交打败了 86.20% 的提交!