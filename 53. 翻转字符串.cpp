class Solution {
public:
    /*
     * @param s: A string
     * @return: A string
     */
    void inStack(string& s, int begin, int end) {
        if (begin >= end) return;
        string temp;
        for (int i = begin; i < end; ++i) {
            temp.push_back(s[i]);
        }
        if (!temp.empty()) cache.push(temp);
    }
     
    string reverseWords(string &s) {
        string ret;
        if (s.empty()) return ret;
        int head = 0;
        int tail = 0;
        int len = s.size();
        while (head < len && tail < len) {
            while (head < len && s[head] == ' ') ++head;
            tail = head;
            while (tail < len && s[tail] != ' ') ++tail;
            // Now : head != ' ' && tail == ' ';
            inStack(s, head, tail);
            head = tail;
        }
        if (!cache.empty()) {
            ret += cache.top();
            cache.pop();
        }
        while (!cache.empty()) {
            ret += " ";
            ret += cache.top();
            cache.pop();
        }
        return ret;
    }

private:
    stack<string> cache;

};

// 总耗时 241 ms
// 您的提交打败了 77.00% 的提交!