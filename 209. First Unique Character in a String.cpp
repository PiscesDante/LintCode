class Solution {
public:
    /**
     * @param str: str: the given string
     * @return: char: the first unique character in a given string
     */
    char firstUniqChar(string &str) {
        int len = str.size();
        for (int i = 0; i < len; ++i) {
            if (cache.find(str[i]) == cache.end()) {
                bool found = true;
                for (int j = i + 1; j < len; ++j) {
                    if (str[i] == str[j]) {
                        found = false;
                        cache.insert(str[i]);
                        break;
                    }
                }
                if (found) return str[i];
            }
        }
        return ' ';
    }

private:
    set<char> cache;
};

// 总耗时 207 ms
// 您的提交打败了 68.32% 的提交!