class Solution {
public:
    int countVowelSubstrings(string s) {
        int count = 0;
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++){
            mp['a'] = -1;mp['e']=-1;mp['i']=-1;mp['o']=-1;mp['u']=-1;
            int cnt = 0;
            for(int j = i; j < s.size(); j++){
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    mp[s[j]]+=1;
                if(mp[s[j]] == 0) cnt++;
                }
                else break;
                
                if(cnt >= 5) count++;
            }
            
        }
        return count;
    }
};