class Solution {
public:
    /*
     * @param A: sorted integer array A which has m elements, but size of A is m+n
     * @param m: An integer
     * @param B: sorted integer array B which has n elements
     * @param n: An integer
     * @return: nothing
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        int ret[m + n];
        int a = 0;
        int b = 0;
        int index = 0;
        while (a < m || b < n) {
            if (a == m) ret[index++] = B[b++];
            else if (b == n) ret[index++] = A[a++];
            else if (A[a] < B[b]) ret[index++] = A[a++];
            else ret[index++] = B[b++];
        }
        for (int i = 0; i < m + n; ++i) A[i] = ret[i];
    }
};

// 总耗时 170 ms
// 您的提交打败了 89.40% 的提交!