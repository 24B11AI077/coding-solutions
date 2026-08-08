class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n =  word1.size(),m = word2.size();
        vector<int> remain(n,0);
        int cnt = 0;
        int  r = m-1;
        for(int i = n-1; i >= 0; i--){
            remain[i] = cnt;
            if(r >= 0 && word2[r] == word1[i]){
                r--;
                cnt++;
            }
        }
        vector<int> ans;
        int j = 0;
        bool changed = false;
        for(int i = 0; i < n && j < m ;i++){
            if(word1[i] == word2[j]){
                ans.push_back(i);
                j++;
            }
            else if (!changed && remain[i] >= m-j-1){
                changed =  true;
                ans.push_back(i);
                j++;
            }
           
        }
        if(j == m) return ans;
        return {};
    }
};