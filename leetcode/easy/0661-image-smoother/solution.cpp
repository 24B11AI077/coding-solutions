class Solution {
public:
    int bfs(vector<vector<int>> &grid,int i,int j,int sum,vector<vector<int>> &ans){
        int n = grid.size();int m = grid[0].size();
        vector<pair<int,int>> directions = {{1,0},{-1,0},{1,-1},{1,1},{-1,-1},{-1,1},{0,1},{0,-1}};int cnt = 1;
        for(pair<int,int> dir : directions){
            if(i+dir.first < n && i+dir.first >= 0 && j+dir.second < m && j+dir.second >= 0 ){
                sum += grid[i+dir.first][j+dir.second];
                cnt++;
            }
        }
        int avg = sum / cnt;
        ans[i][j] = avg;
        return avg;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> ans(rows,vector<int> (cols));
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
               ans[i][j] =  bfs(img,i,j,img[i][j],ans);
            }
        }
        return ans;
    }
};
