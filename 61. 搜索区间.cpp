class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: a list of length 2, [index1, index2]
     */
    int search(vector<int> &A, int target) {
        int begin = 0;
        int end = A.size() - 1;
        while (begin <= end) {
            int mid = begin + (end - begin) / 2;
            if (target > A[mid]) {
                begin = mid + 1;
            } else if (target < A[mid]) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }

    vector<int> searchRange(vector<int> &A, int target) {
        if (A.empty()) return vector<int>({-1, -1});
        int target_index = search(A, target);
        if (target_index == -1) return vector<int>({-1, -1});
        int head = target_index;
        int tail = target_index;
        while (A[head] == target) --head;
        while (A[tail] == target) ++tail;
        return vector<int>({head + 1, tail - 1});
    }

};

// 总耗时 334 ms
// 您的提交打败了 80.00% 的提交!