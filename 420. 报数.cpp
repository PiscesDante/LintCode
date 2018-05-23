class Solution {
public:
    /**
     * @param n: the nth
     * @return: the nth sequence
     */
    string generator(const string& s) {
        string ret;
        char curr_ch = s[0];
        int count = 0;
        for (char ch : s) {
            if (ch == curr_ch) ++count;
            else {
                ret += to_string(count);
                ret += curr_ch;
                curr_ch = ch;
                count = 1;
            }
        }
        ret += to_string(count);
        ret += curr_ch;
        return ret;
    }

    string countAndSay(int n) {
        string ret("1");
        if (n == 1) return ret;
        for (int i = 1; i < n; ++i) ret = generator(ret);
        return ret;
    }
};

// 总耗时 229 ms
// 您的提交打败了 72.60% 的提交!