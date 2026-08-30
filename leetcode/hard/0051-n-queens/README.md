# N-Queens

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

The  **n-queens**  puzzle is the problem of placing `n` queens on an `n x n` chessboard such that no two queens attack each other.

Given an integer `n`, return  *all distinct solutions to the  **n-queens puzzle***. You may return the answer in  **any order**.

Each solution contains a distinct board configuration of the n-queens' placement, where `'Q'` and `'.'` both indicate a queen and an empty space, respectively.

 

 **Example 1:** 

```
Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above

```

 **Example 2:** 

```
Input: n = 1
Output: [["Q"]]

```

 

 **Constraints:** 

- 1 <= n <= 9

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-08-30T09:48:58.813Z  

```cpp
class Solution {
public:
    vector<vector<string>> board;
    bool check(vector<string> temp,int i , int j,int n){
        int f = i,s = j;
        while(f >= 0 ){
            if(temp[f][s] == 'Q') return false;
            f--;
        }
        f = i; s = j;
       while(f >= 0 && s >= 0){
            if(temp[f][s] == 'Q') return false;
            f--;s--;
        }
        f = i;s=j;
        while(f >= 0 && s < n){
            if(temp[f][s] == 'Q') return false;
            f--,s++;
        }
        return true;
    }
    void generate(int n, int idx,vector<string> &temp){
        if(idx == n){
            board.push_back(temp);
            return;
        }
       
            for(int j = 0;j < n; j++){
                if(check(temp,idx,j,n)){
                    temp[idx][j] = 'Q';
                    generate(n,idx+1,temp);
                    temp[idx][j] = '.';
                }
                
            }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp(n,string(n, '.'));
        generate(n,0,temp);
        return board;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/n-queens/)