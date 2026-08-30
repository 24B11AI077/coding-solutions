class Solution {
public:
    void counter(vector<vector<char>> &grid,vector<vector<bool>> &visited,int i , int j){
        if(i >= 0 && j >= 0 && i <= (grid.size()-1) && j <= (grid[0].size()-1)){
            if(visited[i][j] == true || grid[i][j] == '0') return;
            
            visited[i][j] = true;
           counter(grid,visited,i-1,j);
            counter(grid,visited,i,j+1);
             counter(grid,visited,i+1,j);
            
            counter(grid,visited,i,j-1);
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool> (grid[0].size(),false));
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                 if(grid[i][j] == '1' && visited[i][j] == false){
                    
                    counter(grid,visited,i,j);
                    cnt++;
                 }
                 
            }
        }
        return cnt;
       
    }
};