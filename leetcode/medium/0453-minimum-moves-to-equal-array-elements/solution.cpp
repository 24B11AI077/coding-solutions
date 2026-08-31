class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int val = 0;
        int res = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); i++){
            val += nums[i]-nums[i-1];
            res += val;
        }
        return res;
    }
};