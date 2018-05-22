class Solution {
public:
    /**
     * @param s: A string
     * @return: Whether the string is a valid palindrome
     */
    bool isPalindrome(string &s) {
        int head = 0;
        int tail = s.size() - 1;
        while (head < tail) {
            while (!isalnum(s[head]) && head < tail) ++head;
            while (!isalnum(s[tail]) && head < tail) --tail;
            if (tolower(s[head]) != tolower(s[tail])) return false;
            if (++head == tail || --tail == head) break;
        }
        return true;
    }
};

// 总耗时 312 ms
// 您的提交打败了 86.80% 的提交!