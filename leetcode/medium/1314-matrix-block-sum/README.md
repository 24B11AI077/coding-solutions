# Matrix Block Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a `m x n` matrix `mat` and an integer `k`, return  *a matrix*  `answer`  *where each*  `answer[i][j]`  *is the sum of all elements*  `mat[r][c]`  *for* :

- i - k <= r <= i + k,
- j - k <= c <= j + k, and
- (r, c) is a valid position in the matrix.

 

 **Example 1:** 

```
Input: mat = [[1,2,3],[4,5,6],[7,8,9]], k = 1
Output: [[12,21,16],[27,45,33],[24,39,28]]

```

 **Example 2:** 

```
Input: mat = [[1,2,3],[4,5,6],[7,8,9]], k = 2
Output: [[45,45,45],[45,45,45],[45,45,45]]

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n, k <= 100
- 1 <= mat[i][j] <= 100

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 23.74%)  
**Memory:** 13.9 MB (beats 46.58%)  
**Submitted:** 2026-09-17T04:40:05.526Z  

```cpp
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        // vector<vector<int>> prefix = mat;
        vector<vector<int>> prefix(rows,vector<int> (cols,0));
        for(int i = 0; i  < rows ; i++){
            int sum = 0;
            for(int j = 0; j < cols; j++){
                sum += mat[i][j];
                prefix[i][j] = sum;
            }
        }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                mat[i][j] = 0;
                int lr = i-k, ur = i+k; // -1 1
                int  lc = j-k,uc = j+k; // -1 1
                if(lr < 0) lr = 0; // 0
                if(lc < 0) lc = 0; // 0 
                if(ur >= rows) ur = rows-1; // 1
                if(uc >= cols) uc = cols-1; // 1
                for(int k = lr ; k <= ur; k++){
                    if(lc == 0){
                        mat[i][j] += prefix[k][uc];
                    }
                    else {
                        mat[i][j] += prefix[k][uc]-prefix[k][lc-1];
                    }
                }
            }
        }
        return mat;
    }
};
// (0,0) , -1 1 , -1 1, 0 1 , 1 2

/*
   1 2 3  1 3 6
   4 5 6  4 9 15
   7 8 9  7 15 24
*/
```

---

[View on LeetCode](https://leetcode.com/problems/matrix-block-sum/)