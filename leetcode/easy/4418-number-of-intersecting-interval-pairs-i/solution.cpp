class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int size = intervals.size();
        int count = 0;
        for(int i = 0; i < size-1; i++){
            for(int j = i+1; j < size; j++){
                if(intervals[i][0] > intervals[j][1] || intervals[i][1] < intervals[j][0]){
                    continue;
                }
                else count++;
            }
        }
        return count;
    }
};