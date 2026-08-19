class Solution {
public:
    vector<vector<int>> res;
    void combinations(vector<int>&nums,int idx,int k,vector<int>&temp){
        if(temp.size() == k){
            res.push_back(temp);return;
        }
        if(idx == nums.size()) return ;
        temp.push_back(nums[idx]);
        combinations(nums,idx+1,k,temp);
        temp.pop_back();
        combinations(nums,idx+1,k,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i = 0; i  < n ; i++) nums[i] = i+1;
        vector<int> temp;
        combinations(nums,0,k,temp);
        return res;
    }
};