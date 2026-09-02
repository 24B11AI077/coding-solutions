class Solution {
  public:
    int solve(int n, string s) {
        // code here
        vector<bool> occupied(27,false);
        unordered_map<int,int> mp;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]] == 1){
                if(n > 0 ){
                    n--;
                    occupied[s[i]-'A'] = true;
                }
                else {
                    cnt++;
                }
            }
            if(mp[s[i]] == 2){
                if(occupied[s[i]-'A'] == true){
                    n++;
                    occupied[s[i]-'A'] = false;
                }
            }
        }
        return cnt;
    }
};
