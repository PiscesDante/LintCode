class Solution {
public:
    /**
     * @param A: an integer rotated sorted array
     * @param target: an integer to be searched
     * @return: an integer
     */
    int search(vector<int> &A, int target) {
        int head = 0;
        int tail = A.size() - 1;
        while (head <= tail) {
            int mid = head + (tail - head) / 2;
            if (A[mid] == target) return mid;
            if (A[mid] > A[head]) {
                if (A[head] <= target && target < A[mid])
                    tail = mid - 1;
                else
                    head = mid + 1;
            } else {
                if (A[mid] < target && target <= A[tail])
                    head = mid + 1;
                else 
                    tail = mid - 1;
            }
        }
        return -1;
    }
};

// 总耗时 244 ms
// 您的提交打败了 89.80% 的提交!