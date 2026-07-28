class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s;
       sort(s.begin(),s.end());
       string res(s.size(),'0');
       int left = 0,right = res.size()-1;
       char ch = '1';
       int idx = -1;
       for(int i = 0; i < s.size()-1; i+=2){
        if(s[i] == s[i+1]){
            res[left] = s[i];
            res[right] = s[i];
            left++;
            right--;
        }
        else {
            ch = s[i];
            cout << ch << " ";
            idx = (i+1);
            break;
        }
       }
       if(s.size()%2 && ch == '1') ch = s[s.size()-1];
       if(idx >= 0){
            for(int i = idx; i < s.size()-1; i+=2){
        if(s[i] == s[i+1]){
            res[left] = s[i];
            res[right] = s[i];
            left++;
            right--;
        }
       }
       }
       int parity = (s.size()) % 2;
       if(parity && ch != '1'){
        
        int index = (s.size()/2);
        res[index] = ch;
       }
       
        return res;
    }
};