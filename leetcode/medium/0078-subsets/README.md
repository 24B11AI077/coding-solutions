# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 26.73%)  
**Memory:** 17 MB (beats 5.02%)  
**Submitted:** 2026-08-18T09:53:37.922Z  

```cpp
class Solution {
public:
    vector<vector<int>> mat;
   
void subset(vector<int> nums, int idx, vector<int> temp ){
    if(idx == nums.size()) return ;
    temp.push_back(nums[idx]);
    subset(nums,idx+1,temp);
    mat.push_back(temp);
    temp.pop_back();
    subset(nums,idx+1,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
         mat.push_back(vector<int>());
        vector<int> temp ;
         subset(nums,0,temp);
         return mat;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)