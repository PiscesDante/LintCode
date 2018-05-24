class Solution {
public:
    /*
     * @param nums: A list of integers.
     * @return: A list of permutations.
     */
    void permutations(vector<int>& v, int pos, int length) {
        if (pos == length) {
            ret.push_back(v);
        } else {
            for (int i = pos; i < length; ++i) {
                swap(v[pos], v[i]);
                permutations(v, pos + 1, length);
                swap(v[pos], v[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums) {
        if (nums.empty()) {
            vector<int> temp;
            ret.push_back(temp);
            return ret;
        }
        int len = nums.size();
        int pos = 0;
        permutations(nums, pos, len);
        return ret;
    }

private:
    vector<vector<int>> ret;
};

// 总耗时 425 ms
// 您的提交打败了 46.60% 的提交!