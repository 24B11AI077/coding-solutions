class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        set<vector<int>> ans;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]] =i;
        for(int i = 0; i < nums.size()-3; i++){
            for(int j = i+1; j < nums.size()-2; j++){
                int newtarget = target - (nums[i]+nums[j]);
                for(int k = j+1; k < nums.size() ; k++){
                    int com = newtarget - nums[k];
                    if(mp.count(com) && mp[com] != k && mp[com] > k){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[mp[com]]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};