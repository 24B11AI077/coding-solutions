# Search a 2D Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true`  *if*  `target`  *is in*  `matrix`  *or*  `false`  *otherwise*.

You must write a solution in `O(log(m * n))` time complexity.

 

 **Example 1:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

```

 **Example 2:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -104 <= matrix[i][j], target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.4 MB (beats 6.60%)  
**Submitted:** 2026-08-31T08:44:39.691Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)