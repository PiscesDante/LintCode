class Solution {
public:
    /**
     * @param numbers: Give an array numbers of n integer
     * @return: Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int>> threeSum(vector<int> &numbers) {
        sort(numbers.begin(), numbers.end());
        int len = numbers.size();
        for (int i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                for (int k = j + 1; k < len; ++k) {
                    if (numbers[i] + numbers[j] + numbers[k] == 0) {
                        vector<int> temp {numbers[i], numbers[j], numbers[k]};
                        bool is_contained = false;
                        for (auto v : ret) {
                            if (temp == v){
                                is_contained = true;
                                break;
                            }
                        }
                        if (!is_contained) ret.push_back(temp);
                    }
                }
            }
        }
        return ret;
    }

private:
    vector<vector<int>> ret;

};

// 总耗时 181 ms
// 您的提交打败了 75.20% 的提交!