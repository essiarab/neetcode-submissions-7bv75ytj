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
        sort(intervals.begin(),intervals.end(),compareIntervals);
        if(intervals.size()<=1) return true;
        int i=0, j=1;
        for(;j<intervals.size();i++,j++){
            if(intervals[j].start < intervals[i].end){
                return false;
            }
        }
        return true;
       
    }
};
