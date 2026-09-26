class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(int i = 0; i < knowledge.size(); i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        bool found = false;
        int left = 0, right = 0;
        string temp = "";
        string res = "";
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] == '(') {
                found = true;
            }
            if(!found) res += s[i];
            if(s[i] == ')') {
                found = false;
                if(mp.find(temp) != mp.end()){
                    res += mp[temp];
                }
                else{
                     res += "?";
                }
                temp = "";
            }
            if(found && s[i]!='('){
                temp += s[i];
            }
        }
        return res;
    }
};