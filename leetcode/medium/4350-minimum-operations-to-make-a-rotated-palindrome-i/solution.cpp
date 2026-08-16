class Solution {
public:
    void rotate(string &s,int &cnt){
        cnt++;
        char ch = s[0];
        s = s.substr(1);
        s += ch;
        return;
    }
    int minOperations(string s) {
        int n = s.size();
        int mini = INT_MAX;
        int cnt = 0;
        for(int i = 0; i < n ; i++){
           
            int sum = 0;
            int left = 0, right = n-1;
            while(left < right){
            int val1 = abs('z'-s[left]+ s[right] - 'a' +1);
            int val2 = abs(s[left]-'a' + 'z'-s[right] + 1);
            sum += min(abs(s[left]-s[right]),min(val1,val2));
                left++;right--;
            }
            mini = min(mini,sum+cnt);
            rotate(s,cnt);
        }
        return mini;
    }
};