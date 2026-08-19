# Combinations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integers `n` and `k`, return  *all possible combinations of*  `k`  *numbers chosen from the range*  `[1, n]`.

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.

```

 **Example 2:** 

```
Input: n = 1, k = 1
Output: [[1]]
Explanation: There is 1 choose 1 = 1 total combination.

```

 

 **Constraints:** 

- 1 <= n <= 20
- 1 <= k <= n

## Solution

**Language:** C++  
**Runtime:** 78 ms (beats 21.89%)  
**Memory:** 82.6 MB (beats 28.75%)  
**Submitted:** 2026-08-19T03:57:41.592Z  

```cpp
class Solution {
public:
    vector<vector<int>> res;
    void combinations(vector<int>&nums,int idx,int k,vector<int>&temp){
        if(temp.size() == k){
            res.push_back(temp);return;
        }
        if(idx == nums.size()) return ;
        temp.push_back(nums[idx]);
        combinations(nums,idx+1,k,temp);
        temp.pop_back();
        combinations(nums,idx+1,k,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i = 0; i  < n ; i++) nums[i] = i+1;
        vector<int> temp;
        combinations(nums,0,k,temp);
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combinations/)