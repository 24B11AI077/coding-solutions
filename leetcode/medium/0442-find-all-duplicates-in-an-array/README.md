# Find All Duplicates in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of length `n` where all the integers of `nums` are in the range `[1, n]` and each integer appears  **at most**   **twice**, return  *an array of all the integers that appears  **twice***.

You must write an algorithm that runs in `O(n)` time and uses only  *constant*  auxiliary space, excluding the space needed to store the output

 

 **Example 1:** 

```
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

```

 **Example 2:** 

```
Input: nums = [1,1,2]
Output: [1]

```

 **Example 3:** 

```
Input: nums = [1]
Output: []

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 105
- 1 <= nums[i] <= n
- Each element in nums appears once or twice.

## Solution

**Language:** C++  
**Runtime:** 59 ms (beats 19.60%)  
**Memory:** 67.1 MB (beats 17.18%)  
**Submitted:** 2026-09-02T06:36:54.617Z  

```cpp
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] == 2) ans.push_back(nums[i]);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-all-duplicates-in-an-array/)