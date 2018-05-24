class Solution {
public:
    /*
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int>& A) {
        int head = 0;
        int tail = A.size() - 1;
        int len = A.size();
        while (head <= tail) {
            int mid = head + (tail - head) / 2;
            if (mid + 1 < len && mid - 1 >= 0) {
                if (A[mid] > A[mid + 1] && A[mid] > A[mid - 1]) {
                    return mid;
                }
            }
            if (A[mid - 1] > A[mid]) tail = mid - 1;
            else if (A[mid] < A[mid + 1]) head = mid + 1;
        }
        return -1;
    }
};

// 总耗时 177 ms
// 您的提交打败了 96.80% 的提交!