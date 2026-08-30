class Solution {
public:
    void generator(int n ,vector<string> &res, string temp , int unmatched){
        if(unmatched == 0 && n == 0 ){
            res.push_back(temp);
            return;
        }
        if(unmatched < 0 || (n) < 0) return;
        generator(n-1,res,temp+'(',unmatched+1);
        generator(n,res,temp+')',unmatched - 1);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp = "";
        generator(n ,  res , temp ,  0);
        return res;
    }
};