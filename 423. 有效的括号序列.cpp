class Solution {
public:
    /**
     * @param s: A string
     * @return: whether the string is a valid parentheses
     */
    stack<char> cache;

    bool isValidParentheses(string &s) {
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                cache.push(ch);
            } else if (ch == ')') {
                if (cache.empty()) return false;
                if (cache.top() != '(') return false;
                else cache.pop();
            } else if (ch == ']') {
                if (cache.empty()) return false;
                if (cache.top() != '[') return false;
                else cache.pop();
            } else if (ch == '}') {
                if (cache.empty()) return false;
                if (cache.top() != '{') return false;
                else cache.pop();
            }
        }
        if (!cache.empty()) return false;
        return true;
    }
};

// 总耗时 352 ms
// 您的提交打败了 84.60% 的提交!