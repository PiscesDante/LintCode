class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> &A, int target) {
        int head = 0;
        int tail = A.size() - 1;
        while (head <= tail) {
            int mid = head + (tail - head) / 2;
            if (target < A[mid]) tail = mid - 1;
            else if (target > A[mid]) head = mid + 1;
            else return mid;
        }
        return head;
    }
};

// 总耗时 241 ms
// 您的提交打败了 89.40% 的提交!