class Solution {
public:
    /*
     * @param A: A list of integers
     * @param elem: An integer
     * @return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        if (A.empty()) return 0;
        int len = A.size();
        int head = 0;
        int tail = len - 1;
        int count = 0;
        while (head < tail) {
            while (A[head] != elem && head < tail) ++head;
            while (A[tail] == elem && head < tail) {
                --tail;
                ++count;
            }
            if (head < tail) swap(A[head], A[tail]);
        }
        if (A[tail] == elem) ++count;
        return len - count;
    }
};

// 总耗时 340 ms
// 您的提交打败了 92.40% 的提交!