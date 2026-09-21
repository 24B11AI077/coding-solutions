class Solution {
public:
    int jump(vector<int>& nums) {
       int n = nums.size();
       if(n == 1) return 0;
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
        i  = idx;
       }
       return count;
    }
};
