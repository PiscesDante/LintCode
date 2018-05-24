class Solution {
public:
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    int partition(vector<string>& v, int begin, int end) {
        int head = begin + 1;
        int tail = end;
        while (head < tail) {
            while (v[head] < v[begin] && head < tail) ++head;
            while (v[tail] > v[begin] && head < tail) --tail;
            if (head < tail) {
                swap(v[head], v[tail]);
                if (++head == tail || --tail == head) break;
            }
        }
        if (v[head] < v[begin]) {
            swap(v[head], v[begin]);
            return head;
        } else {
            swap(v[head - 1], v[begin]);
            return head - 1;
        }
    }

    void quick_sort(vector<string>& v, int begin, int end) {
        if (begin >= end) return;
        int pivot = partition(v, begin, end);
        quick_sort(v, begin, pivot - 1);
        quick_sort(v, pivot + 1, end);
    }

    string longestCommonPrefix(vector<string>& strs) {
        // write your code here
        if (strs.empty()) return string();
        int len = strs.size();
        quick_sort(strs, 0, len - 1);
        string first = strs[0];
        string last = strs[len - 1];
        string ret;
        int common_length = (first.size() > last.size()) ? last.size() : first.size();
        for (int i = 0; i < common_length; ++i) {
            if (first[i] == last[i]) ret.push_back(first[i]);
            else break;
        }
        return ret;
    }
};

// 总耗时 120 ms
// 您的提交打败了 99.60% 的提交!