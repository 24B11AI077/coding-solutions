class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> prefix = mat;
        // vector<vector<int>> prefix(rows,vector<int> (cols,0));
        // for(int i = 0; i  < rows ; i++){
        //     int sum = 0;
        //     for(int j = 0; j < cols; j++){
        //         sum += mat[i][j];
        //         prefix[i][j] = sum;
        //     }
        // }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                mat[i][j] = 0;
                int lr = i-k, ur = i+k; // -1 1
                int  lc = j-k,uc = j+k; // -1 1
                if(lr < 0) lr = 0; // 0
                if(lc < 0) lc = 0; // 0 
                if(ur >= rows) ur = rows-1; // 1
                if(uc >= cols) uc = cols-1; // 1
                while(lr <= ur&&lc <= uc){
                    mat[i][j] += prefix[lr][lc];
                    lc++;
                    if(lc > uc){
                        lc = j-k;
                        if(lc < 0) lc = 0;
                        lr++;
                    }
                }
            }
        }
        return mat;
    }
};
// (0,0) , -1 1 , -1 1, 0 1 , 0 1

/*
   1 2 3
   4 5 6 
*/