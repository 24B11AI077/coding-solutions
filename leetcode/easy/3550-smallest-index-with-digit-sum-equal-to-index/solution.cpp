class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            string val = to_string(nums[i]);
            int sum = 0;
            for(int j = 0; j < val.size(); j++){
                sum += val[j]-'0';
            }
            if(sum == i) return i;
        }
        return -1;
    }
};