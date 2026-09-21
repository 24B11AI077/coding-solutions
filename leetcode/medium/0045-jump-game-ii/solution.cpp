class Solution {
public:
    int jump(vector<int>& nums) {
    
       int n = nums.size();
       if(n == 1) return 0;
       vector<int> prefix(n);
       int zeroes = 0;
       for(int i = 0; i < n; i++){
         if(nums[i] == 0){
            zeroes++;
            prefix[i] = zeroes;
         }
         else {
            zeroes = 0;
            prefix[i] = zeroes;
         }
       }
       int count = 1;
       int i = 0;
       while(i < n){
        int maxi = 0;
        int size = i+nums[i];
        int idx = 0;
        if(size >= n-1) return count;
        for(int j = i+1; j <= size; j++){
            if(nums[j]+j > maxi){
                maxi = nums[j]+j;
                idx = j;
            }
        }
         count++;
        if(maxi >= n-1) return count;
        if(prefix[maxi] > 0){
            maxi -= prefix[maxi];
        }
       
        i  = idx;
       }
       return count;
    }
};
