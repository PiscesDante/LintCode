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

class Solution {
public:
    /**
     * @param intervals: Sorted interval list.
     * @param newInterval: new interval.
     * @return: A new interval list.
     */
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(),
            [=](const Interval& rhs, const Interval& lhs) {
                return rhs.start < lhs.start;
            }
        );
        vector<Interval> ret;
        int new_start = intervals[0].start;
        int new_end = intervals[0].end;
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
};

// 总耗时 144 ms
// 您的提交打败了 98.40% 的提交!