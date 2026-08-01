class Solution {
public:
    
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        unordered_map<int,int> mp;
        bool valid = true;
        for(int i = 0; i < k ; i++) {
            mp[nums[i]]+=1;
            sum += nums[i];
            
        }
        if(mp.size() != k) valid = false;
        int i = 0;
        long long  maxi =0;
        for(int j = k ; j < nums.size() ; j++ ){
           if(valid) maxi = max(maxi,sum);
           sum += nums[j];
           sum -= nums[i];
           mp[nums[i]]-=1;
           mp[nums[j]] += 1;
           if(mp[nums[i]] == 0) mp.erase(nums[i]);
            if(mp.size() == k) valid = true;
            else valid = false;
            
           i++;
        }
        if(valid) maxi = max(maxi,sum);
        return maxi;
    }
};