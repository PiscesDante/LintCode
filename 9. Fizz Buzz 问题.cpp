class Solution {
public:
    /**
     * @param n: An integer
     * @return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        ret.reserve(n);
        for (int k = 1; k <= n; ++k) {
            if (k % 3 == 0 && k % 5 == 0) ret.push_back("fizz buzz");
            else if (k % 3 == 0) ret.push_back("fizz");
            else if (k % 5 == 0) ret.push_back("buzz");
            else ret.push_back(to_string(k));
        }
        return ret;
    }
};

// 总耗时 26 ms
// 您的提交打败了 99.60% 的提交!