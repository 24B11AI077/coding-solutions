class Solution {
public:
    void counter(vector<vector<char>> &board,vector<vector<bool>> &visited,int i , int j){
        if(i >= 0 && j < board[0].size() && i < board.size()  && j >= 0){
            if(board[i][j] == 'X' && visited[i][j] == false){
                visited[i][j] = true;
                counter(board,visited,i+1,j);
                 counter(board,visited,i,j+1);
                  counter(board,visited,i-1,j);
                   counter(board,visited,i,j-1);
            }
           
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> visited(n,vector<bool> (m,false));
        int cnt = 0;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m; j++){
                 if(board[i][j] == 'X' && visited[i][j] == false){
                cnt++;
                counter(board,visited,i,j);
            }
            }
           
            
        }
        return cnt;
       
    }
};