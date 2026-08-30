class Solution {
public:
    vector<vector<string>> board;
    bool check(vector<string> temp,int i , int j,int n){
        int f = i,s = j;
        while(f >= 0 ){
            if(temp[f][s] == 'Q') return false;
            f--;
        }
        f = i; s = j;
       while(f >= 0 && s >= 0){
            if(temp[f][s] == 'Q') return false;
            f--;s--;
        }
        f = i;s=j;
        while(f >= 0 && s < n){
            if(temp[f][s] == 'Q') return false;
            f--,s++;
        }
        return true;
    }
    void generate(int n, int idx,vector<string> &temp){
        if(idx == n){
            board.push_back(temp);
            return;
        }
       
            for(int j = 0;j < n; j++){
                if(check(temp,idx,j,n)){
                    temp[idx][j] = 'Q';
                    generate(n,idx+1,temp);
                    temp[idx][j] = '.';
                }
                
            }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp(n,string(n, '.'));
        generate(n,0,temp);
        return board;
    }
};