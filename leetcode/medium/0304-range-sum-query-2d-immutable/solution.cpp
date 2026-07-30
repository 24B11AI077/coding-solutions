class NumMatrix {
public:
   vector<vector<int>> grid;
   vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        grid = matrix;
        prefix.resize(grid.size(),vector<int> (grid[0].size()+1,0));
        for(int i = 0; i < grid.size(); i++){
            int sum = 0;
            for(int j = 1;j <= grid[0].size(); j++){
                sum+=grid[i][j-1];
                prefix[i][j] = (sum);
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1; i <= row2 ; i++){
            sum += (prefix[i][col2+1]-prefix[i][col1]);
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */