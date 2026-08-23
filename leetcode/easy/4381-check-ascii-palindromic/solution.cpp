class Solution {
public:
    bool isPalindromic(string nums) {
        int i = 0, j = nums.size()-1;
        while(i <= j){
            if((nums[i] == 'f' && nums[j] == 'f')){
                i++;j--;
            }
            else if((nums[i] == 'n' && nums[j] == 'v') || ((nums[j] == 'n' && nums[i] == 'v'))){
                i++;j--;
            }
           else return false;
        }
        return true;
    }
};