class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int ,int> mp;
        for(int val : nums){
            mp[val]++;
        }
        int count = 0;
        for(int i = 0; i < nums.size();i++){
            if(mp[nums[i]] == 3){
                vector<int> temp;
                for(int j = i ; j < nums.size(); j++){
                    if(nums[i] == nums[j]){
                        temp.push_back(j);
                    }
                }
                if(temp[1]-temp[0] == temp[2]-temp[1]){
                    count++;
                }
                mp[nums[i]]--;
            }
        }
        return count;
    }
};