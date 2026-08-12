class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string res = "";
        vector<string> str(numRows,"");
        int k = 0;
        bool f = true, r = false;
        for(int i = 0; i < s.size(); i++){
            if(f){
                str[k].push_back(s[i]);
            k++;
            if(k == numRows){
                k-=2;
                r = true; f = false;
            }
            }
            else if(r){
                str[k].push_back(s[i]);
                k--;
                if(k == -1){
                     k+=2;f = true, r = false;
                }

            }
        }
        for(string val : str){
            res += val;
        }
        return res;
    }
};