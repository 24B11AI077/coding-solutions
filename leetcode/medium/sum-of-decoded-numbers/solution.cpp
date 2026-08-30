class Solution {
public:
    int sumDecoded(vector<long long>& nums) {
        int sum = 0;
        int mod = 1000000007;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i]%10;
           long long y = nums[i]/10;
            string temp = to_string(y);
            string x1 = temp.substr(0,x);
             string y1 = temp.substr(x);
            int val1 = stoll(x1);
            int val2 = stoll(y1);
            long long res = 1;
            while(val2 > 0){
                res = (res%mod*val1%mod)%mod;
                val2--;
            }
            cout <<  res << " ";
            sum += res;
        }
        return sum;
    }
};