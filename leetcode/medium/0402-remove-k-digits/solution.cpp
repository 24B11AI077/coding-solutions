class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() == k) return "0";
        stack<char> st;
        for(char  val : num){
            while(!st.empty() && st.top() > val && k > 0 ){
                st.pop();
                k--;
            }
            st.push(val);
        }
        while(k > 0 ){
            st.pop();
            k--;
        }
        string res = "";
        int zeros = 0;
        while(!st.empty()){
            res += st.top();
            if(st.top() == '0') zeros++;
            st.pop();
        }
        reverse(res.begin(),res.end());
        if(zeros == res.size()) return "0";
        string fin = "";
        bool found = false;
        for(int i = 0; i < res.size(); i++){
            if(res[i] > '0'){
                found = true;
            }
            if(!found){
                continue;
            }
            fin += res[i] ;
        }
        return fin;
    }
};
//1111219 - k =3