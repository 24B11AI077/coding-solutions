class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> res;
        int cnt = 0;
        for(int i = 0; i < n ; i++){
            if(nums[i] < pivot)res.push_back(nums[i]);
            if(nums[i] == pivot) cnt++;
        }
        while(cnt > 0){
            res.push_back(pivot);cnt--;
        }
        for(int val : nums){
            if(val > pivot) res.push_back(val);
        }
        return res;
    }
};