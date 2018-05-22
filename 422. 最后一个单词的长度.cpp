class Solution {
public:
    /**
     * @param s: A string
     * @return: the length of last word
     */
    int lengthOfLastWord(string &s) {
        int index = s.size() - 1;
        int ret = 0;
        while (index >= 0 && !isalpha(s[index])) --index;
        if (index < 0){
            return ret;
        } else {
            while (index >= 0 && isalpha(s[index])) {
                ++ret;
                --index;
            }
            return ret;
        }
    }
};

// 总耗时 201 ms
// 您的提交打败了 73.40% 的提交!