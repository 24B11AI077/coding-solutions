class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = LLONG_MIN;
        for(int i = 0; i < nums.size() -1 ; i++){
            
            for(int j = i+1 ; j < nums.size(); j++){
                long long val = gcd(nums[i],nums[j]);
                val = val*val;
                long long product = 1LL*nums[i]*nums[j];
                maxi = max(maxi , product / val );
            }
        }
        return maxi;
    }
};