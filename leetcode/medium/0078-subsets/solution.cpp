class Solution {
public:
    vector<vector<int>> mat;
   
void subset(vector<int> nums, int idx, vector<int> temp ){
    if(idx == nums.size()) return ;
    temp.push_back(nums[idx]);
    subset(nums,idx+1,temp);
    mat.push_back(temp);
    temp.pop_back();
    subset(nums,idx+1,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
         mat.push_back(vector<int>());
        vector<int> temp ;
         subset(nums,0,temp);
         return mat;
    }
};