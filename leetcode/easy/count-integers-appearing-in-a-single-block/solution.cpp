class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int val = nums[0];int cnt = 0;int res = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size() ; i++){
            if(val != nums[i]){
                if(cnt > 1)  res++;
                cnt = 0;
                val = nums[i];
            }
            cnt++;
            mp[nums[i]]++;
        }
        if(cnt > 1) res++;
        for(auto val: mp){
            if(val.second == 1) res++;
        }
        return res;
    }
};