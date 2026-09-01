class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n ;i++){
            mp[nums[i]] = i;
        }
        set<vector<int>> ans;
        for(int i = 0; i < n-2 ; i++){
            int target = -1*nums[i];
            for(int j = i+1; j < n ; j++){
                int com = target-nums[j];
                if(mp.count(com) && mp[com] != j && mp[com] > j ){
                    vector<int> temp = {nums[i],nums[j],nums[mp[com]]};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
            }
        }
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};