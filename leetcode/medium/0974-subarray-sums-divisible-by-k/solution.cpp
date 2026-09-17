class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        
        int sum = 0;
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;
            
            if (rem < 0) {
                rem += k;
            }
            
            if (mp.count(rem)) {
                count += mp[rem];
            }
            
            mp[rem]++;
        }
        
        return count;
    }
};
// 4 9 9 7 4 5 
// 4,1,0,6,-1,1,-2,-4,0
// 4 5 5 11 10 11 9 5 5

 // a b c [l,y,l]
 // a a+b a+b+c