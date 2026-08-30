# Number of Islands

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` 2D binary grid `grid` which represents a map of `'1'`s (land) and `'0'`s (water), return  *the number of islands*.

An  **island**  is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

 **Example 1:** 

```
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1

```

 **Example 2:** 

```
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3

```

 

 **Constraints:** 

- m == grid.length
- n == grid[i].length
- 1 <= m, n <= 300
- grid[i][j] is '0' or '1'.

## Solution

**Language:** C++  
**Runtime:** 26 ms (beats 62.95%)  
**Memory:** 16.6 MB (beats 67.89%)  
**Submitted:** 2026-08-30T09:56:54.389Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-islands/)