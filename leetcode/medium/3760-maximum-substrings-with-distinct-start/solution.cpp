class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> mp;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]] == 1) cnt++;
        }
        return cnt;
    }
};