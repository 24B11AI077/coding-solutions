class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int low = 0, high = nums.size()-1;
       while(low < high){
        int mid = low + (high - low) / 2;
        if(mid-1 >= 0 && (mid+1) < nums.size() && nums[mid] > nums[mid+1] && nums[mid] >nums[mid-1]){
            return mid;
        }
        else if(mid-1 < 0 && (mid+1) < nums.size() && nums[mid] > nums[mid+1] ){
            return mid;
        }
        else if(mid-1 >= 0 && (mid+1) >= nums.size() && nums[mid] >nums[mid-1]){
            return mid;
        }
        else if(nums[mid] < nums[mid+1]) low = mid+1;
        else high = mid-1;
       }
       return low;
    }
};