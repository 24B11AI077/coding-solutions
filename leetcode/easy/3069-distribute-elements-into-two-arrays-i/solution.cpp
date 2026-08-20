class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        if(nums.size() <= 2) return nums;
        vector<int> nums1;
        vector<int> nums2;
        nums1.push_back(nums[0]);
        nums2.push_back(nums[1]);
        for(int i = 2; i < nums.size(); i++){
            if(nums1[nums1.size()-1] > nums2[nums2.size()-1]) nums1.push_back(nums[i]);
            else nums2.push_back(nums[i]);
        }
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        return nums1;
    }
};