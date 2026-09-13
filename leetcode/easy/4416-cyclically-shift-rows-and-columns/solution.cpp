class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
       
        for(int i = 0; i < n; i++){
            int shift = rowShift[i];
            int temp = shift;
            vector<int> res;
            while(1){
                res.push_back(grid[i][temp]);
                temp++;
                temp %= n;
                if(temp == shift) break;
            }
            grid[i] = res;
        }
        for(int j = 0; j < n ; j++){
              int shift = colShift[j];
            int temp = shift;
            vector<int> res;
            while(1){
                res.push_back(grid[temp][j]);
                temp++;
                temp %= n;
                if(temp == shift) break;
            }
            for(int i = 0; i < n ; i++){
                grid[i][j] = res[i];
            }
        }
        return grid;
    }
};