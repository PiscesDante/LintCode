class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        long long head = 1;
        long long tail = x;
        long long mid = 0;
        while (head <= tail) {
            mid = head + (tail - head) / 2;
            if (mid * mid > x) tail = mid - 1;
            else if (mid * mid < x) head = mid + 1;
            else return mid;
        }
        if (mid * mid > x) return mid - 1;
        else return mid;
    }
};

// 总耗时 275 ms
// 您的提交打败了 57.20% 的提交!