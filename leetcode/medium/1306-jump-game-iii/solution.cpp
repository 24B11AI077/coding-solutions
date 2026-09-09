class Solution {
public:
   bool bfs(vector<int>&nums,int idx , vector<bool> &visited){
        if(idx < 0 || idx >= nums.size() || visited[idx]) return false;
        if(nums[idx] == 0) return true;
        visited[idx] = true;
        bool left = bfs(nums,idx-nums[idx],visited);
        bool right = bfs(nums,idx+nums[idx],visited);
        return left || right;
    }
    bool canReach(vector<int>& nums,int& start) {
        int n = nums.size();
        vector<bool>visited(n,false);
        return bfs(nums,start,visited);
    }
};
// 1 2 3 1 3 1