class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> eg;
        unordered_map<int,int> prev;
        unordered_map<int,bool> valid;
        unordered_map<int,int> idx;
        for(int val : nums){
            eg[val]++;
            if(eg[val] >= 3) {
                prev[val] = -1;
                valid[val] = true;
            }
        }
        for(int i = 0; i < nums.size(); i++){
           if(prev[nums[i]] == -1 && valid[nums[i]]){
               prev[nums[i]] = -2;//-2,0--1,1--
               idx[nums[i]] = i;
           }
            else if(prev[nums[i]] == -2){
                prev[nums[i]] = i-idx[nums[i]];
                idx[nums[i]] = i;
            }
            else if(prev[nums[i]] > 0 && valid[nums[i]]){
                if(i-idx[nums[i]] != prev[nums[i]]){
                    valid[nums[i]] = false;
                }
                else {
                    idx[nums[i]] = i;
                }
            }
        }
        int count = 0;
        for(auto val : valid){
            if(val.second == true) count++;
        }
        return count;
    }
};