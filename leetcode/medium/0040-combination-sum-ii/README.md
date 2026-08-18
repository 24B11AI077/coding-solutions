# Combination Sum II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may only be used  **once**  in the combination.

 **Note:**  The solution set must not contain duplicate combinations.

 

 **Example 1:** 

```
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

```

 **Example 2:** 

```
Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]

```

 

 **Constraints:** 

- 1 <= candidates.length <= 100
- 1 <= candidates[i] <= 50
- 1 <= target <= 30

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 37.71%)  
**Memory:** 14.9 MB (beats 14.07%)  
**Submitted:** 2026-08-18T09:52:00.302Z  

```cpp
class Solution {
public:
      vector<vector<int>> res;
      void  found(vector<int>& cand,int i , int target,vector<int> &temp){
        if(target == 0) {
            vector<int> cpy = temp;
            //sort(cpy.begin(),cpy.end());
            res.push_back(cpy); return;
        }
        if(i == cand.size()) return;
        if(target < 0) return ;
         temp.push_back(cand[i]);
         found(cand,i+1,target-cand[i],temp);
          temp.pop_back();
        while (i+1<cand.size() && cand[i]==cand[i+1]){
            i++;
        }
         found(cand,i+1,target,temp);
        return;
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        found(candidates,0,target,temp);
        
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum-ii/)