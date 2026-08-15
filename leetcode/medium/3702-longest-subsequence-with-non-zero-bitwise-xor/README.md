# Longest Subsequence With Non-Zero Bitwise XOR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums`.

Return the length of the  **longest subsequence**  in `nums` whose bitwise  **XOR**  is  **non-zero**. If no such  **subsequence**  exists, return 0.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3]

 **Output:**  2

 **Explanation:** 

One longest subsequence is `[2, 3]`. The bitwise XOR is computed as `2 XOR 3 = 1`, which is non-zero.

 **Example 2:** 

 **Input:**  nums = [2,3,4]

 **Output:**  3

 **Explanation:** 

The longest subsequence is `[2, 3, 4]`. The bitwise XOR is computed as `2 XOR 3 XOR 4 = 5`, which is non-zero.

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 0 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 171.3 MB (beats 22.70%)  
**Submitted:** 2026-08-15T02:35:40.849Z  

```cpp
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 && nums[0] == 0) return 0;
        if(n == 1) return 1;
        int val = 0;
        int cnt = 0;
        for(int v: nums){
            int res = val^v;
           val = res;
           if(v == 0) cnt++;
        }
        if(cnt == n) return 0;
        if(val == 0) return n-1;
        return n;
    }
};
//8 4 2 1
//0 0 0 1
//0 0 1 0
//0 0 1 1
//0 1 0 0 
```

---

[View on LeetCode](https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/)