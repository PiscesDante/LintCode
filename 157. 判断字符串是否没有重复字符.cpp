class Solution {
public:
    /*
     * @param str: A string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        for (char ch : str) {
            if (cache.find(ch) == cache.end()) cache.insert(ch);
            else return false;
        }
        return true;
    }

private:
    set<char> cache;

};

// 总耗时 153 ms
// 您的提交打败了 67.80% 的提交!