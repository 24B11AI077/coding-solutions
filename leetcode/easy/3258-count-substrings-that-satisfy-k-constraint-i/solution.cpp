class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        unordered_map<char,int> mp;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            mp['1'] = 0,mp['0'] = 0;
            for(int j = i; j < s.size(); j++){
                mp[s[j]]++;
                if(mp['1'] <= k || mp['0'] <= k) cnt++;
            }
        }
        return cnt;
    }
};