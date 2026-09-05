class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> prefix(size);
        vector<int> suffix(size);
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < size; i++){
             maxi = max(maxi,nums[i]);
             prefix[i] = maxi ;
        }
        for(int i = size-1; i >= 0; i--){
            mini = min(mini,nums[i]);
            suffix[i] = mini;
        }
        int idx =  -1;
        int st = INT_MAX;
        for(int i = 0; i < size ; i++){
            if((prefix[i]-suffix[i]) <= k){
                if((prefix[i]-suffix[i]) < st){
                    idx = i;st = prefix[i]-suffix[i];break;
                }
            }
        }
        return idx;
    }
};