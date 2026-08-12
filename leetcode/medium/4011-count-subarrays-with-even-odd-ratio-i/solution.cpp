class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        if(nums.size() == 1 && nums[0]%2 != 0) return 1;
        int cnt = 0;
        for(int i = 0; i < nums.size()-1; i++){
            int even = 0, odd = 0;
            for(int j = i ; j < nums.size() ; j++){
                if(nums[j]%2 == 0) even++;
                else odd++;
                if(odd > 0){
                if(((float)even/odd) <= ((float)a/b)) {
                    cnt++;
                   
                    
                }
            }
            }
            
        }
        if(nums[nums.size()-1]%2 != 0 && (0<=(a/b))) cnt++;
        return cnt;
    }
};