class Solution {
public:
   int isValid(vector<int>&nums,int mid){
        int cnt = 0;int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > mid) return -1;
            if(nums[i] + curr > mid){
                curr = 0;
                cnt++;
            }
            curr += nums[i];
        }
        cnt++;
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        long long sum = 0;
        for(int val : nums) sum += val;
        int low = 0, high = sum;
        while(low < high){
            int mid = low + (high - low) / 2;
            int count = isValid(nums,mid);
            if(count <= k && count != -1){
                high = mid;
            }
            else low = mid+1;
        }
        return low ;
    }
};