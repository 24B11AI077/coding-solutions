class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 && nums[0] == 0) return 0;
        if(n == 1) return 1;
        int val = 0;
        int cnt = 0;
        for(int v: nums){
            int res = val^v;
           val = res;
           if(v == 0) cnt++;
        }
        if(cnt == n) return 0;
        if(val == 0) return n-1;
        return n;
    }
};
//8 4 2 1
//0 0 0 1
//0 0 1 0
//0 0 1 1
//0 1 0 0 