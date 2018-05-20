class Solution {
public:
    /*
     * @param source: source string to be scanned.
     * @param target: target string containing the sequence of characters to match
     * @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
     */
    int strStr(const char *source, const char *target) {
        if (source == NULL || target == NULL) return -1;
        int lens = strlen(source);
        int lent = strlen(target);
        if (lens == 0 && lent == 0) return 0;
        else if (lens == 0) return -1;
        else if (lent == 0) return 0;
        for (int k = 0; k < (lens - lent) + 1; ++k) {
            if (source[k] == target[0]) {
                int temp_k = k;
                int temp_t = 0;
                while (source[temp_k] == target[temp_t] && temp_t < lent) {
                    temp_k += 1;
                    temp_t += 1;
                }
                if (temp_t == lent) return k;
            }
        }
        return -1;
    }
};

// 总耗时 199 ms
// 您的提交打败了 68.00% 的提交!