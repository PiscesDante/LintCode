bool isLonger(const string& s1, const string& s2) {
    return s1.size() > s2.size();
}

class Solution {
public:
    /*
     * @param dictionary: an array of strings
     * @return: an arraylist of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        vector<string> ret;
        if (dictionary.empty()) return ret;
        sort(dictionary.begin(), dictionary.end(), isLonger);
        ret.push_back(dictionary[0]);
        int len = dictionary.size();
        for (int i = 1; i < len && dictionary[i].size() == dictionary[0].size(); ++i)
            ret.push_back(dictionary[i]); 
        return ret;
    }
};

// 总耗时 235 ms
// 您的提交打败了 95.20% 的提交!