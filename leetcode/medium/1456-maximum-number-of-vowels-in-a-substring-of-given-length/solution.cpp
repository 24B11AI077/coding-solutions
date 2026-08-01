class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi = 0;
        int cnt = 0;
        for(int i = 0; i < k ;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt++;
            }
        }
        int i = 0;
        for(int j = k ; j < s.size() ; j++){
            maxi = max(maxi,cnt);
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                cnt++;
            }
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt--;
            }
            i++;
        }
        maxi = max(maxi,cnt);
        return maxi;
    }
};