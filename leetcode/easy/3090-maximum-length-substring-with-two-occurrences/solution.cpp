class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i = 0, j = 0;
        unordered_map<int,int> mp;
        int maxi = 0;
        for(int j = 0; j < s.size(); j++){
            mp[s[j]]++;
            if(mp[s[j]] > 2){
                while(i < j && mp[s[j]] > 2){
                    mp[s[i]]--;
                    i++;
                }
            }
             maxi = max(maxi, j-i+1);
            
        }
        return maxi;
    }
};