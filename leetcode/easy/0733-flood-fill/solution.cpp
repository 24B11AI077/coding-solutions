class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color)
    return image;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>> que;
        que.push({sr,sc});
        int original = image[sr][sc];
        vector<vector<bool>> visited(n,vector<bool> (m,false));
        while(!que.empty()){
            int i = que.front().first;
            int j = que.front().second;
            que.pop();
            image[i][j] = color;
            if((i+1) < n && j < m && image[i+1][j] == original && !visited[i+1][j]){
                que.push({i+1,j});
                visited[i+1][j] = true;
            }
             if((i-1) >= 0 && j < m && image[i-1][j] == original && visited[i-1][j] == false){
                que.push({i-1,j});visited[i-1][j] = true;
            }
             if((i) < n && (j+1) < m && image[i][j+1] == original && visited[i][j+1] == false){
                que.push({i,j+1});visited[i][j+1] = true;
            }
             if((i) < n && (j-1) >= 0 && image[i][j-1] == original && visited[i][j-1] == false){
                que.push({i,j-1});visited[i][j-1] = true;
            }
        }
        return image;
    }
};