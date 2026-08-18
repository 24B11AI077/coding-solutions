# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 8 ms (beats 5.56%)  
**Memory:** 13.4 MB (beats 5.23%)  
**Submitted:** 2026-08-18T09:49:26.700Z  

```cpp
class Solution {
public:
    vector<vector<int>> res;
    void generate(vector<int> nums, vector<int> temp, vector<int> visited){
        if(temp.size() == nums.size()){
            res.push_back(temp); return;
        }
        for(int i = 0; i < nums.size() ; i++){
            if(visited[i] == 0){
                visited[i] = 1;
                temp.push_back(nums[i]);
                generate(nums,temp,visited);
                temp.pop_back();
                visited[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<int> visited(nums.size());
        generate(nums,temp,visited);
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)