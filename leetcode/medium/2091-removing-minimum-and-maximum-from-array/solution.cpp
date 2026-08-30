class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int ma = -1, mi = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                ma  = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                mi = i;
            }
        }
        int res = INT_MAX;
        if(ma > mi ){
            res = min(ma+1,min(mi+1+(n-ma),n-mi));
        }
        else {
            res = min(mi+1,min(ma+1+(n-mi),n-ma));
        }
        return res;
    }
};