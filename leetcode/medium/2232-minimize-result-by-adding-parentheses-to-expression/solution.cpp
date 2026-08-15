class Solution {
public:
    string minimizeResult(string exp) {
        int n = exp.size();
        int pidx = 0;
        for(int i = 0; i < n; i++){
            if(exp[i] == '+'){
                pidx = i;break;
            }
        }
        string num1 = exp.substr(0,pidx);
        string num2 = exp.substr(pidx+1);
        int bl = 0, br = 0;
        int a = 1, d = 1;
        int mini = INT_MAX;
        string res = "";
        for(int bl = 0; bl < num1.size() ; bl++){
            string sub1 = num1.substr(bl);
            int val1 = stoi(sub1);
            if(bl == 0) a = 1;
            else a = stoi(num1.substr(0,bl));
            for(int br = 0;br < num2.size() ; br++){
                string sub2 = num2.substr(0,br+1);
                int val2 = stoi(sub2);
                if(br == num2.size()-1) d = 1;
                else d = stoi(num2.substr(br+1));
                int val = a*(val1+val2)*d;
                if(val < mini){
                    res = "";
                    res += num1.substr(0,bl) + '(' + sub1 + '+' + sub2 + ')' + num2.substr(br+1);
                }
                mini = min(mini,val);
            }
        }
        return res;
    }
};
