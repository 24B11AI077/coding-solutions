class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[mid + 1]) {
                // We are on a decreasing slope.
                // A peak exists on the left side, including mid.
                right = mid;
            } else {
                // We are on an increasing slope.
                // A peak exists on the right side.
                left = mid + 1;
            }
        }

        return right;
    }
};