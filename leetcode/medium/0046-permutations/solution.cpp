class Solution {
public:
    vector<vector<int>> res;
    void generate(vector<int> nums, vector<int> temp, vector<int> visited){
        if(temp.size() == nums.size()){
            res.push_back(temp); return;
        }
        for(int i = 0; i < nums.size() ; i++){
            if(visited[i] == 0){
                visited[i] = 1;
                temp.push_back(nums[i]);
                generate(nums,temp,visited);
                temp.pop_back();
                visited[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<int> visited(nums.size());
        generate(nums,temp,visited);
        return res;
    }
};