# Jump Game

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums`. You are initially positioned at the array's  **first index**, and each element in the array represents your maximum jump length at that position.

Return `true` *if you can reach the last index, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

```

 **Example 2:** 

```
Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- 0 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 52.4 MB (beats 57.80%)  
**Submitted:** 2026-09-09T05:13:31.326Z  

```cpp
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > maxReach) return false;
            maxReach = max(maxReach,nums[i]+i);
        }
        return true;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/jump-game/)