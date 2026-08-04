class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0;
        int pointer = 0;
        int cpy = maxCost;
        for(int k = 0; k < s.size() ; k++){
            if(abs(t[k]-s[k]) <= cpy) {
                cpy -= abs(t[k]-s[k]);
                pointer++;
            }
            else break;
        }
        int maxi = 0;
        for(int k = pointer; k < s.size() ; k++){
            if(cpy >= 0 && cpy <= maxCost){
                maxi= max(maxi,(k-i));
            }
            
            cpy -= abs(s[i]-t[i]);
            i++;
            cpy += abs(s[k]-t[k]);
        }
        return maxi;
    }
};