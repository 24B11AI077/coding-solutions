# Minimum Operations to Reduce X to Zero

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` and an integer `x`. In one operation, you can either remove the leftmost or the rightmost element from the array `nums` and subtract its value from `x`. Note that this  **modifies**  the array for future operations.

Return  *the  **minimum number**  of operations to reduce* `x`  *to  **exactly***  `0`  *if it is possible**, otherwise, return* `-1`.

 

 **Example 1:** 

```
Input: nums = [1,1,4,2,3], x = 5
Output: 2
Explanation: The optimal solution is to remove the last two elements to reduce x to zero.

```

 **Example 2:** 

```
Input: nums = [5,6,7,8,9], x = 4
Output: -1

```

 **Example 3:** 

```
Input: nums = [3,2,20,1,1,3], x = 10
Output: 5
Explanation: The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 1 <= nums[i] <= 104
- 1 <= x <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 9 MB  
**Submitted:** 2026-08-01T10:03:08.406Z  

```cpp
class Solution {
public:
    vector<int> res;
    void generator(vector<int> nums,int cnt,int x){
        if(x < 0) return;
        if(x == 0) {
            res.push_back(cnt);
        }
        vector<int> part(nums.begin()+1,nums.end());
        generator(part,cnt +1,x-nums[0]);
        vector<int> spart(nums.begin(),nums.end()-1);
        generator(spart,cnt+1,x-nums[nums.size()-1]);

    }
    int minOperations(vector<int>& nums, int x) {
        generator(nums,0,x);
        if(res.size() == 0) return -1;
        sort(res.begin(),res.end());
        return res[0];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/)