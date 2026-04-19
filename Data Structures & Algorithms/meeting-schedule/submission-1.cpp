/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    static bool compareIntervals(const Interval& a, const Interval& b) {
        return a.start < b.start;
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        if(intervals.size()<=1) return true;
        sort(intervals.begin(),intervals.end(),compareIntervals);
        int i=0, j=1;
        for(;j<intervals.size();i++,j++){
            if(intervals[j].start < intervals[i].end){
                return false;
            }
        }
        return true;
       
    }
};
