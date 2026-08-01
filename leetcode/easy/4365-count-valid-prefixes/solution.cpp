class Solution {
public:
    int countValidPrefixes(string s) {
        int zeroes = 0, ones = 0;
        int cnt = 0;
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == '0') zeroes++;
            else ones++;
            if(ones == 0 && zeroes ==  1) cnt++;
            else if(zeroes == 0 && ones == 1) cnt++;
            else if(zeroes > 0 && ones > 0 && abs(zeroes-ones) <= 1) cnt++;
            
        }
        return cnt;
    }
};