class Solution {
public:
    long long maximumTotalCost(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        long long sum = 0;
        for(int i = 0; i < nums.size(); i++) sum += abs(nums[i]);
        return sum;
    }
};