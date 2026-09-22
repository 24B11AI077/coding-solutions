class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& x, const vector<int>& y) {
            return x[1] < y[1];
        });
        int count = 0 , curr = intervals[0][1];
        for(int i =1; i < intervals.size(); i++){
            if(curr > intervals[i][0]){
                count++;
            }
            else curr = intervals[i][1];
        }
        return count;
    }
};