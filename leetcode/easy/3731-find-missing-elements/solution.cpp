class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int left = nums[0];left++;
        vector<int> res;
        for(int i = 1 ; i < nums.size() ;  i++){
            if(nums[i] == left) {
                left++;
            }
            if(nums[i] > left){
                 for(int val = left; val < nums[i]; val++){
                 res.push_back(val);
                     }
            left = nums[i]+1;
            }
        }
      
        
       
        return res;
    }
};