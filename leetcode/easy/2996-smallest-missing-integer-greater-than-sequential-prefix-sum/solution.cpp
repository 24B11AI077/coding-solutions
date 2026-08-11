class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size() == 1) return nums[0]+1;
        int sum = nums[0];
        int val = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == (val+1)){
                val++;sum+=nums[i];
            }
            else {
             
                break;
            }
        }
        val = sum;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if( val == nums[i]) val++;
        }
        return val;
    }
};