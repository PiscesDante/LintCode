class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        if (A.empty()) return B;
        if (B.empty()) return A;
        int lena = A.size();
        int lenb = B.size();
        int indexa = 0;
        int indexb = 0;
        ret.reserve(lena + lenb);
        while (indexa < lena || indexb < lenb) {
            if (indexa == lena) ret.push_back(B[indexb++]);
            else if (indexb == lenb) ret.push_back(A[indexa++]);
            else if (A[indexa] < B[indexb]) ret.push_back(A[indexa++]);
            else ret.push_back(B[indexb++]);
        }
        return ret;
    }

private:
    vector<int> ret;

};

// 总耗时 238 ms
// 您的提交打败了 50.00% 的提交!