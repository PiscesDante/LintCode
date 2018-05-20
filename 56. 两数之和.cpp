class Solution {
public:
    /**
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1 + 1, index2 + 1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &numbers, int target) {
        int len = numbers.size();
        for (int i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                if (numbers[i] + numbers[j] == target) {
                    vector<int> ret {i, j};
                    return ret;
                }
            }
        }
        vector<int> ret;
        return ret;
    }
};

// 总耗时 142 ms
// 您的提交打败了 73.20% 的提交!