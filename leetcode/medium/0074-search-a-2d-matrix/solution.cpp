class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int row = 0;
        while(row < rows && matrix[row][col-1] < target){
            row++;
        }
        if(row >= rows) return false;
        int low = 0,high = col-1;
        while(low <= high){
            int mid = low + (high- low) / 2;
            if(matrix[row][mid] == target) return true;
            if(matrix[row][mid] < target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};