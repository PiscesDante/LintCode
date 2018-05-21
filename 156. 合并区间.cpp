/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */
bool isBigger(const Interval& rhs, const Interval& lhs) {
    return rhs.start < lhs.start;
}


class Solution {
public:
    /**
     * @param intervals: interval list.
     * @return: A new interval list.
     */
    vector<Interval> merge(vector<Interval> &intervals) {
        if (intervals.empty()) return ret;
        int new_start;
        int new_end;
        sort(intervals.begin(), intervals.end(), isBigger);
        if (!intervals.empty()) {
            new_start = intervals[0].start;
            new_end = intervals[0].end;
        }
        int len = intervals.size();
        for (int i = 1; i < len; ++i) {
            if (new_end >= intervals[i].start) {
                if (new_end < intervals[i].end) new_end = intervals[i].end;
            } else {
                ret.push_back(Interval(new_start, new_end));
                new_start = intervals[i].start;
                new_end = intervals[i].end;
            }
        }
        ret.push_back(Interval(new_start, new_end));
        return ret;
    }

private:
    vector<Interval> ret;
};

// 总耗时 184 ms
// 您的提交打败了 92.60% 的提交!