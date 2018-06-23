class Solution {
public:
    /**
     * @param nums: A set of numbers
     * @return: A list of lists
     */
    void subSetMaker(vector<int>& nums) {
        int len = nums.size();
        if (len == 1) {
            ret.push_back(nums);
        } else {
            for (int i = 0; i < len; ++i) {
                vector<int> temp;
                for (int j = 0; j < len; ++i) {
                    if (j != i) temp.push_back(nums[j]);
                }
                ret.push_back(temp);
                subSetMaker(temp);
            }
        }
    }

    vector<vector<int>> subsets(vector<int> &nums) {
        // write your code here
        ret.push_back(vector<int>());
        subSetMaker(nums);
        return ret;
    }

private:
    vector<vector<int>> ret;

};