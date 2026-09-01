class Solution {
public:
    static bool descending(vector<int>& a,vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       sort(boxTypes.begin(),boxTypes.end(),descending);
       int ans = 0;
       for(auto val: boxTypes){
        int mini = min(truckSize,val[0]);
        ans += (mini*val[1]);
        truckSize -= mini;
        if(!truckSize)break;
       }
       return ans;
    }
};