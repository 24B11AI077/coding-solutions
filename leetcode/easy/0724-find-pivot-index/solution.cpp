class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        vector<int> prefix(nums.size());
        int sum = 0;
        for(int i = 0; i < nums.size() ; i++){
            sum += nums[i];
            prefix[i] = sum;
        }
        int n = prefix.size();
        if(prefix[n-1]-prefix[0]== 0) return 0;
        
        for(int i = 1; i < nums.size()-1; i++){
            if(prefix[i-1] == (prefix[n-1]-prefix[i])) return i;
        }
        if(prefix[n-2] == 0) return (n-1);
        return -1;
    }
};