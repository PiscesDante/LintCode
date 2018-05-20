class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        if (!str.empty()) {
            reverse(str.begin(), str.end());
            offset %= str.size();
            auto pivot = str.begin() + offset;
            reverse(str.begin(), pivot);
            reverse(pivot, str.end());
        }
    }
};

// 总耗时 171 ms
// 您的提交打败了 48.60% 的提交!