class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int i = 0; 
        int maxi = -1;
        while( i < nums.size()){
            int val = nums[i];int cnt = 0;
            bool valid = true;
            for(int j = 0; j <= nums.size()-k; j++){
                
                for(int l = j; l < j+k ; l++){
                    if(val == nums[l] && cnt == 1){
                        valid = false;break;
                    }
                    if(val == nums[l]){
                        cnt = 1;break;
                    }
                    
                }
                if(!valid) break;
                
            }
            if(valid){
                maxi = max(maxi,nums[i]);
            }
            i++;
        }
        return maxi;
    }
};