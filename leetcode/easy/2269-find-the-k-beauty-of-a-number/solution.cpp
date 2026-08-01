class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        string temp = "";
        int cnt = 0;
        for(int i = 0; i < k ; i++){
            temp += s[i];
        }
        for(int j = k; j < s.size() ; j++){
            if(stoi(temp) != 0){
                if(num%stoi(temp) == 0) cnt++;
            }
            
            temp += s[j];
            temp.erase(0,1);
        }
        
        if(stoi(temp) != 0){
                if(num%stoi(temp) == 0) cnt++;
            }
        return cnt;
    }
};