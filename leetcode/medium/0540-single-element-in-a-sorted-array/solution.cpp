class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1) return nums[0];
        unordered_map<int,int> mp;
        bool might = false;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] == 1 && might) return nums[i-1];
            if(mp[nums[i]] == 1) might = true;
            if(mp[nums[i]] == 2) might = false;
        }
        return nums[n-1];
    }
};