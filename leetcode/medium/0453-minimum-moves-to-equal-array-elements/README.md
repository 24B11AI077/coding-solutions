# Minimum Moves to Equal Array Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of size `n`, return  *the minimum number of moves required to make all array elements equal*.

In one move, you can increment `n - 1` elements of the array by `1`.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: 3
Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]

```

 **Example 2:** 

```
Input: nums = [1,1,1]
Output: 0

```

 

 **Constraints:** 

- n == nums.length
- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109
- The answer is guaranteed to fit in a 32-bit integer.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 17.45%)  
**Memory:** 32.1 MB (beats 25.41%)  
**Submitted:** 2026-08-31T09:16:01.626Z  

```cpp
class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int val = 0;
        int res = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); i++){
            val += nums[i]-nums[i-1];
            res += val;
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/)