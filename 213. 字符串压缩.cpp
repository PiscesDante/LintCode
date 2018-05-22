class Solution {
public:
    /**
     * @param str: a string
     * @return: a compressed string
     */
    string compress(string &str) {
        int curr_char = str[0];
        int count = 1;
        int len = str.size();
        for (int i = 1; i < len; ++i) {
            if (str[i] == curr_char) {
                count += 1;
            } else {
                ret += curr_char;
                ret += to_string(count);
                curr_char = str[i];
                count = 1;
            }
        }
        ret += curr_char;
        ret += to_string(count);
        if (ret.size() < len) return ret;
        return str;
    }

private:
    string ret;

};

// 总耗时 116 ms
// 您的提交打败了 83.02% 的提交!