class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    int partition(vector<int>& v, int begin, int end) {
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

    void quick_sort(vector<int>& v, int begin, int end) {
        if (begin >= end) return;
        int pivot = partition(v, begin, end);
        quick_sort(v, begin, pivot - 1);
        quick_sort(v, pivot + 1, end);
    }
     
    void sortIntegers(vector<int> &A) {
        quick_sort(A, 0, A.size() - 1);
    }
};

// 总耗时 308 ms
// 您的提交打败了 61.60% 的提交!