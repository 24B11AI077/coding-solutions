class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0] == nums[n-1]) return 0;
        int j = n - 1;
        int curr = nums[n-1], cnt = 0;
        int total = 0;
        while( j > 0  && nums[j] != nums[0]){
            if(curr!= nums[j]){
                total += cnt;
                curr = nums[j];//1,3,5
            }
            cnt++;
            j--;
            
        }
        total += cnt;
        return total;
    }
};
//111222333444
//1123456