int partition(string& s, int begin, int end) {
    int head = begin + 1;
    int tail = end;
    while (head < tail) {
        while (s[head] < s[begin] && head < tail) ++head;
        while (s[tail] > s[begin] && head < tail) --tail;
        if (head < tail) {
            swap(s[head], s[tail]);
            if (++head == tail || --tail == head) break;
        }
    }
    if (s[head] < s[begin]) {
        swap(s[head], s[begin]);
        return head;
    } else {
        swap(s[head - 1], s[begin]);
        return head - 1;
    }
}

void quick_sort(string& s, int begin, int end) {
    if (begin >= end) return;
    int pivot = partition(s, begin, end);
    quick_sort(s, begin, pivot - 1);
    quick_sort(s, pivot + 1, end);
}

class Solution {
public:
    /**
     * @param s: The first string
     * @param t: The second string
     * @return: true or false
     */
    bool anagram(string &s, string &t) {
        int lens = s.size();
        int lent = t.size();
        if (lens != lent) return false;
        quick_sort(s, 0, lens - 1);
        quick_sort(t, 0, lent - 1);
        if (s != t) return false;
        return true;
    }
};

// 总耗时 155 ms
// 您的提交打败了 96.00% 的提交!