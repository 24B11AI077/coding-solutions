class Solution {
  public:
    int maxFruits(vector<int>& nums, int m) {
        // code here
        int size = nums.size();
        int sum = 0;
        if(size <= m){
            for(int val : nums){
                sum += val;
            }
            return sum ;
        }
        for(int i = 0; i < m; i++){
            sum += nums[i];
        }
        int maxi = 0;
        int i = 0,j=m;
        while(i < size){
             maxi = max(maxi,sum);
            sum += nums[j];
            sum -= nums[i];
            i++;j++;j = j%size;
        }
        maxi = max(maxi,sum);
        return maxi;
    }
};