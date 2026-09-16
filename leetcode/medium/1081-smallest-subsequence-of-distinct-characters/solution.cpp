class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> freq;
        for(char val : s){
            freq[val]+=1;
        }
        stack<char> st;
        unordered_map<char,bool> checker;
        for(char ch : s){
            while(!st.empty() && ch < st.top() && freq[st.top()] > 1 && !checker[ch]){
                freq[st.top()] -= 1;
                
                checker[st.top()] = false;
                st.pop();
            }
            if(checker[ch] == false) {
                st.push(ch);
                checker[ch] = true;
            }
            else {
               freq[ch] -= 1;
            }
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};