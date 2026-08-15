class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.size();
        if(n == 1) return "";
        int left = 0, right = n-1;
        while(left < right){
            if(s[left]!='a'){
                s[left] = 'a'; return s;
            }
            left++;right--;
        }
        s[n-1] = 'b';
        return s;
    }
};