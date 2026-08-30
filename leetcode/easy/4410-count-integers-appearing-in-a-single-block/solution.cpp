class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int cnt = 0;int res = 0;
        int val = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=val){
                if(mp[val] == cnt) res++;
                val = nums[i];
                cnt=0;
            }
          cnt++;
        }
        if(cnt == mp[val]) res++;
        return res;
    }
};