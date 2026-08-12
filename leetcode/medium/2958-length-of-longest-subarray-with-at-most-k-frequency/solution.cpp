class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0, j = 0;
        unordered_map<int,int> mp;
        int maxi = 0;
       while(i <= j && j < nums.size()){
            if(mp[nums[j]] == k){
                maxi = max(maxi , j-i);
                while( i < j && mp[nums[j]] == k){
                    mp[nums[i]]--;
                    i++;
                }
               mp[nums[j]]++;j++;
            }
            else {
                mp[nums[j]]++;j++;
            }
        }
        cout << i << " " << j ;
        maxi = max(maxi , j - i);
        return maxi;
    }
};