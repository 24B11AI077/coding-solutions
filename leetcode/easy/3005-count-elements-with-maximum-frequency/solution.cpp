class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        unordered_map<int,int> mp;
        set<int> st;
        for(int i = 0; i < n ; i++){
            mp[nums[i]]++;
            maxi = max(maxi,mp[nums[i]]);
            st.insert(nums[i]);
        }
        int count = 0;
        for(int val : st){
            if(mp[val] == maxi) count++;
        }
        return count*maxi;
    }
};