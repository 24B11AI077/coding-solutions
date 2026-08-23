class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        int i = 0;
        vector<vector<int>> res;
        vector<int> temp{0,0};
        if(lower > nums[nums.size()-1] || upper < nums[0]) {
            res.push_back({lower,upper});return res;
        }
        int prev = -1;
        while(lower <= upper && i < nums.size()){
            if(prev == nums[i] || lower > nums[i]){
                prev = nums[i];
                i++;continue;
            }
            if(lower != nums[i]){
            temp[0] = lower;
            if(upper < nums[i]-1) temp[1] = upper;
             else
            temp[1] = nums[i]-1;
            res.push_back(temp);
            }
            lower = nums[i]+1;prev = nums[i];i++;
            
        }
        if(lower <= upper) {
            temp[0] = lower;
            temp[1] = upper;
            res.push_back(temp);
        }
        return res;
    }
};