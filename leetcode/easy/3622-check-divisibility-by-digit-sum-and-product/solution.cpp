class Solution {
public:
    bool checkDivisibility(int n) {
        int cpy = n;
        string s = to_string(cpy);
        long long pro =1,sum =0;
        for(auto val: s){
            pro *= val-'0';
            sum += val-'0';
        }
        return !(n%(pro+sum));
    }
};